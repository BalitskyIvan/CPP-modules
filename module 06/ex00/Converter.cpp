//
// Created by Lonmouth Mallador on 1/21/21.
//

#include "Converter.hpp"

std::string Converter::getType(std::string src) {
  if (strlen(src.c_str()) == 1 && src.c_str()[0] >= 33 && src.c_str()[0] < 127)
  {
    charVal = src;
    intVal = src.c_str()[0];
    floatVal = src + ".0f";
    doubleVal = src + ".0";
    return ("char");
  }
  if (std::atoi(src.c_str()) >= 33 && std::atoi(src.c_str()) < 127)
    charVal = std::atoi(src.c_str());
  else
    charVal = "Non displayable";
  intVal = std::to_string(std::atoi(src.c_str()));
  floatVal = std::to_string(std::atof(src.c_str())) + "f";
  doubleVal = std::to_string(std::atof(src.c_str()));

  return "none";
}

Converter::Converter(const std::string &source) : source(source) {
  std::cout << getType(source) << std::endl;

}

const std::string &Converter::getIntlVal() const { return intVal; }
const std::string &Converter::getFloatVal() const { return floatVal; }
const std::string &Converter::getDoubleVal() const { return doubleVal; }
const std::string &Converter::getCharVal() const { return charVal; }

Converter::~Converter() {}
