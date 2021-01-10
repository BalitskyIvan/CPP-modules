#include "Fixed.hpp"

int main() {
    Fixed a;
    Fixed const b(10);

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;

    return 0;
}