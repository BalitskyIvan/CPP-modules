//
// Created by Lonmouth Mallador on 1/21/21.
//

#include "Converter.hpp"
#include <iomanip>
#include <sstream>

static int getPrecision(std::string src) {
  int res = 1, beforeDot = 0;
  bool is_dot = false;

  for (int i = 0; i < strlen(src.c_str()); i++) {
    if (!is_dot)
      beforeDot = i;
    if (src.c_str()[i] == '.' && is_dot)
      break;
    if ((src.c_str()[i] < '0' || src.c_str()[i] > '9') && src.c_str()[i] != '.')
      break;
    if (src.c_str()[i] == '.')
      is_dot = true;
    if (is_dot && src.c_str()[i] != '0')
      res = i - beforeDot;
  }
  if (res == 0)
    res = 1;
  return (res);
}

Converter::Converter(const std::string &source) : src(source) {
  if (strlen(src.c_str()) == 1 &&
      (src.c_str()[0] >= 33 && src.c_str()[0] < 127) &&
      !(src.c_str()[0] >= '0' && src.c_str()[0] <= '9')) {
    charVal = src;
    intVal = std::to_string(src.c_str()[0]);
    floatVal = std::to_string(src.c_str()[0]) + ".0f";
    doubleVal = std::to_string(src.c_str()[0]) + ".0";
  } else {
    if (std::atoi(src.c_str()) >= 33 && std::stoi(src.c_str()) < 127)
      charVal = std::atoi(src.c_str());
    else
      charVal = "Non displayable";
    try {
      int res = static_cast<int>(std::stoi(src.c_str()));
      intVal = std::to_string(res);
    } catch (std::exception &e) {
      intVal = "impossible";
    }
    try {
      float res = static_cast<float>(std::stof(src.c_str()));
      std::stringstream stream;
      stream << std::fixed << std::setprecision(getPrecision(src)) << res;
      floatVal = stream.str() + "f";
    } catch (std::exception &e) {
      floatVal = "impossiblee";
    }
    try {
      double res = static_cast<double>(std::stod(src.c_str()));
      std::stringstream stream;
      stream << std::fixed << std::setprecision(getPrecision(src)) << res;
      doubleVal = stream.str();
    } catch (std::exception &e) {
      doubleVal = "impossible";
    }
  }
}

const std::string &Converter::getIntVal() const { return intVal; }
const std::string &Converter::getFloatVal() const { return floatVal; }
const std::string &Converter::getDoubleVal() const { return doubleVal; }
const std::string &Converter::getCharVal() const { return charVal; }

Converter::~Converter() {}
