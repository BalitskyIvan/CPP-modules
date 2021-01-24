//
// Created by Lonmouth Mallador on 1/22/21.
//

#include "Converter.hpp"

static bool isAlNum(std::string type, char findCase) {
  switch (findCase) {
  case 'f': {
    int start = 0;
    if (type.c_str()[0] == '-')
      start++;
    bool isDot = false;
    for (int i = start; i < (int)strlen(type.c_str()) - 1; i++) {
      if (!isDot && type.c_str()[0] == '.')
        return false;
      if (isDot && type.c_str()[i] == '.')
        return false;
      if (type.c_str()[i] == '.' && i + 1 == (int)strlen(type.c_str()) - 1)
        return false;
      if (type.c_str()[i] == '.')
        isDot = true;
      if ((type.c_str()[i] > '9' || type.c_str()[i] < '0') &&
          type.c_str()[i] != '.')
        return false;
    }
    return true;
  }
  case 'd': {
    int start = 0;
    if (type.c_str()[0] == '-')
      start++;
    bool isDot = false;
    for (int i = start; i < (int)strlen(type.c_str()); i++) {
      if (!isDot && type.c_str()[0] == '.')
        return false;
      if (isDot && type.c_str()[i] == '.')
        return false;
      if (type.c_str()[i] == '.' && i + 1 == (int)strlen(type.c_str()))
        return false;
      if (type.c_str()[i] == '.')
        isDot = true;
      if ((type.c_str()[i] > '9' || type.c_str()[i] < '0') &&
          type.c_str()[i] != '.')
        return false;
    }
    return true;
  }
  case 'i':
    int start = 0;
    if (type.c_str()[0] == '-')
      start++;
    for (int i = start; i < (int)strlen(type.c_str()); i++)
      if (type.c_str()[i] > '9' || type.c_str()[i] < '0')
        return false;
    return true;
  }
  return false;
}

char Converter::getType(std::string type) {
  if (strlen(src.c_str()) == 1 &&
      (src.c_str()[0] >= 33 && src.c_str()[0] < 127) &&
      !(src.c_str()[0] >= '0' && src.c_str()[0] <= '9'))
    return 'c';
  if ((type.find('f') != std::string::npos && isAlNum(type, 'f')) ||
      type == "nanf" || type == "inff" || type == "+inff" || type == "-inff")
    return 'f';
  if ((type.find('.') != std::string::npos && isAlNum(type, 'd')) ||
      type == "nan" || type == "inf" || type == "+inf" || type == "-inf")
    return 'd';
  if (isAlNum(type, 'i'))
    return 'i';
  return 'e';
}