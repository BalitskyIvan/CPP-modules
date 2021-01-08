#include <iostream>

int main() {
    std::string stroke = "HI THIS IS BRAIN";
    
    std::string *pointer = &stroke;
    std::string &reference = stroke;

    std::cout << *pointer << std::endl;
    std::cout << reference << std::endl;

    return 0;
}
