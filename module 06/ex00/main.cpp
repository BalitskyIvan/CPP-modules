#include "Converter.hpp"
int main(int argc, char **argv) {
  if (argc == 2) {
    Converter converter(argv[1]);
    std::cout << "char: " + converter.getCharVal() << std::endl;
    std::cout << "int: " + converter.getIntVal() << std::endl;
    std::cout << "float: " + converter.getFloatVal() << std::endl;
    std::cout << "double: " + converter.getDoubleVal() << std::endl;

  } else
    std::cout << "Error : wrong nuber of arguments" << std::endl;
  return 0;
}
