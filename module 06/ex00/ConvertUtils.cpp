//
// Created by Lonmouth Mallador on 1/22/21.
//

#include "Converter.hpp"
#include <cmath>
#include <iomanip>
#include <sstream>

static bool isRightConversionFloat(float fl, std::string src) {
  std::string res = std::to_string(fl);
  int last, size = strlen(src.c_str()) - 1;
  bool isDot = false;
  if (src.c_str()[size] != 'f')
    size++;
  for (int i = 0; i < size && i < (int)strlen(res.c_str()); i++) {
    if (!isDot && res.c_str()[i] != src[i])
      return false;
    if (res.c_str()[i] == '.')
      isDot = true;
    if (isDot && (res.c_str()[i] != src[i] && src[i] != '0'))
      return false;
    last = i;
  }
  if (src[last + 1] == 'f')
    return true;
  for (int i = last + 1; i < size; i++)
    if (src[i] != '0')
      return false;
  return true;
}

static bool isRightConversionDouble(double db, std::string src) {
  std::string res = std::to_string(db);
  int last;
  bool isDot = false;
  for (int i = 0; i < (int)strlen(src.c_str()) && i < (int)strlen(res.c_str());
       i++) {
    if (!isDot && res.c_str()[i] != src[i])
      return false;
    if (res.c_str()[i] == '.')
      isDot = true;
    if (isDot && (res.c_str()[i] != src[i] && src[i] != '0'))
      return false;
    last = i;
  }
  for (int i = last + 1; i < (int)strlen(src.c_str()); i++)
    if (src[i] != '0')
      return false;
  return true;
}

static int getPrecision(std::string src) {
  int res = 1, beforeDot = 0, start = 0;
  bool is_dot = false;
  if (src.c_str()[0] == '-')
    start = 1;
  for (int i = start; i < (int)strlen(src.c_str()); i++) {
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

void Converter::convertFromChar(std::string val) {
  try {
    char c = val.c_str()[0];
    charVal = c;
    intVal = std::to_string(static_cast<int>(c));
    doubleVal = std::to_string(static_cast<int>(c)) + ".0";
    floatVal = std::to_string(static_cast<int>(c)) + ".0f";
  } catch (std::exception &e) {
    onException();
  }
}

void Converter::convertFromInt(std::string val) {
  try {
    int res = std::stoi(val.c_str());
    intVal = std::to_string(res);
    try {
      if (static_cast<int>(std::stoi(val)) >= 33 &&
          static_cast<int>(std::stoi(val)) < 127)
        charVal = static_cast<char>(res);
      else
        charVal = "Non displayable";
    } catch (std::exception &e) {
      charVal = "impossible";
    }
    try {
      double db = static_cast<float>(res);
      if (!isRightConversionDouble(db, val))
        doubleVal = "impossible";
      else {
        std::stringstream stream;
        stream << std::fixed << std::setprecision(getPrecision(src)) << db;
        doubleVal = stream.str();
      }
    } catch (std::exception &e) {
      doubleVal = "impossible";
    }
    try {
      float fl = static_cast<float>(res);
      if (!isRightConversionFloat(fl, val))
        floatVal = "impossible";
      else {
        std::stringstream stream;
        stream << std::fixed << std::setprecision(getPrecision(src)) << fl;
        floatVal = stream.str() + "f";
      }
    } catch (std::exception &e) {
      floatVal = "impossible";
    }
  } catch (std::exception &e) {
    onException();
  }
}

void Converter::convertFromFloat(std::string val) {
  try {
    float res = static_cast<float>(std::stof(val.c_str(), NULL));
    if (!isRightConversionFloat(res, val)) {
      onException();
      return;
    }
    std::stringstream stream;
    stream << std::fixed << std::setprecision(getPrecision(src)) << res;
    floatVal = stream.str() + "f";
    try {
      if (static_cast<int>(std::stoi(val)) >= 33 &&
          static_cast<int>(std::stoi(val)) < 127)
        charVal = static_cast<char>(res);
      else
        charVal = "Non displayable";
    } catch (std::exception &e) {
      charVal = "impossible";
    }
    try {
      double db = static_cast<double>(res);
      std::stringstream stream;
      stream << std::fixed << std::setprecision(getPrecision(src)) << db;
      doubleVal = stream.str();
    } catch (std::exception &e) {
      doubleVal = "impossible";
    }
    try {
      intVal = std::to_string(static_cast<int>(std::stoi(val)));
    } catch (std::exception &e) {
      intVal = "impossible";
    }
  } catch (std::exception &e) {
    onException();
  }
}

void Converter::convertFromDouble(std::string val) {
  try {
    double res = static_cast<double>(std::stod(val));
    if (!isRightConversionDouble(res, val)) {
      onException();
      return;
    }
    std::stringstream stream;
    stream << std::fixed << std::setprecision(getPrecision(src)) << res;
    doubleVal = stream.str();
    try {
      if (static_cast<int>(std::stoi(val)) >= 33 &&
          static_cast<int>(std::stoi(val)) < 127)
        charVal = static_cast<char>(res);
      else
        charVal = "Non displayable";
    } catch (std::exception &e) {
      charVal = "impossible";
    }
    try {
      float fl = static_cast<float>(res);
      if (!isRightConversionFloat(res, val))
        floatVal = "impossible";
      else {
        std::stringstream stream;
        stream << std::fixed << std::setprecision(getPrecision(src)) << fl;
        floatVal = stream.str() + "f";
      }
    } catch (std::exception &e) {
      floatVal = "impossible";
    }
    try {
      intVal = std::to_string(static_cast<int>(std::stoi(val)));
    } catch (std::exception &e) {
      intVal = "impossible";
    }
  } catch (std::exception &e) {
    onException();
  }
}