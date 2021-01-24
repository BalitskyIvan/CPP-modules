//
// Created by Lonmouth Mallador on 1/21/21.
//

#ifndef EX00_CONVERTER_HPP
#define EX00_CONVERTER_HPP

#include <iostream>

class Converter {
private:
  const std::string src;
  std::string intVal;
  std::string floatVal;
  std::string doubleVal;
  std::string charVal;
  char getType(std::string type);
  void convertFromInt(std::string val);
  void convertFromChar(std::string val);
  void convertFromFloat(std::string val);
  void convertFromDouble(std::string val);
  void onException();

public:
  Converter(const std::string &source);
  const std::string &getIntVal() const;
  const std::string &getFloatVal() const;
  const std::string &getDoubleVal() const;
  const std::string &getCharVal() const;
  virtual ~Converter();
};

#endif // EX00_CONVERTER_HPP
