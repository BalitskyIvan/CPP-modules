//
// Created by Lonmouth Mallador on 1/9/21.
//

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : value(fixed.value) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &fixed) {
    	return *this;
    }
    value = fixed.value;
    return *this;
}

ostream& operator<< (ostream& out const Fixed& fixed)
{
	out << fixed.value;
	return out;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw) {
    this->value = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
