//
// Created by Lonmouth Mallador on 1/9/21.
//

#ifndef MODULE_02_FIXED_HPP
#define MODULE_02_FIXED_HPP

#include <iostream>

class Fixed {
private:
	int value;
	static const int fractional = 8;

public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed& operator= (const Fixed& fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);

	virtual ~Fixed();
};


#endif//MODULE_02_FIXED_HPP
