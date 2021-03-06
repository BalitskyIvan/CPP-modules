//
// Created by Lonmouth Mallador on 1/9/21.
//

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    this->value = fixed.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &fixed) {
    	return *this;
    }
    value = fixed.getRawBits();
    return *this;
}

std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
	out << fixed.getRawBits();
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
