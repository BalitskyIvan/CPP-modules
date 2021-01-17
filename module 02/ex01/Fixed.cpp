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
std::ostream& operator<< (std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
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

Fixed::Fixed(int value) : value(value << this->fractional) {    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float value) : value((int) std::roundf(value * (1 << this->fractional))) {    std::cout << "Float constructor called" << std::endl;
}

int Fixed::toInt(void) const {
	return this->value >> this->fractional;
}
float Fixed::toFloat(void) const {
	return (float) this->value / (float) (1 << this->fractional);
}
