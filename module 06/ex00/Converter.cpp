//
// Created by Lonmouth Mallador on 1/21/21.
//

#include "Converter.hpp"

void Converter::onException() {
  intVal = "impossible";
  floatVal = "impossible";
  doubleVal = "impossible";
  charVal = "impossible";
}

Converter::Converter(const std::string &source) : src(source) {
  switch (getType(src)) {
  case 'c':
    convertFromChar(source);
    break;
  case 'f':
    convertFromFloat(source);
    break;
  case 'd':
    convertFromDouble(source);
    break;
  case 'i':
    convertFromInt(source);
    break;
  case 'e':
    onException();
    break;
  }
}

const std::string &Converter::getIntVal() const { return intVal; }
const std::string &Converter::getFloatVal() const { return floatVal; }
const std::string &Converter::getDoubleVal() const { return doubleVal; }
const std::string &Converter::getCharVal() const { return charVal; }

Converter::~Converter() {}
