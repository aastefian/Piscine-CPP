/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:49:37 by svilau            #+#    #+#             */
/*   Updated: 2018/10/04 12:20:32 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Class
#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed(void) : _fixedPointValue(0)
{

	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int n)
{

	//conversion vers le corespondant fixed(8) point value
	this->_fixedPointValue = n << this->_fractionalBits;

	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const float n)
{

	//conversion vers le corespondant fixed(8) point value
	this->_fixedPointValue = n * (1 << this->_fractionalBits);

	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed(void)
{

	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &src)
{

	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

int Fixed::getRawBits(void) const
{

	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
};

void Fixed::setRawBits(int const raw)
{

	this->_fixedPointValue = raw;

	return;
};

float Fixed::toFloat(void) const
{
	return ((float)(this->_fixedPointValue) / (float)(1 << this->_fractionalBits));
};

int Fixed::toInt(void) const
{
	return roundf(this->_fixedPointValue >> this->_fractionalBits);
};

Fixed &Fixed::operator=(Fixed const &rhs)
{

	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = rhs.getRawBits();

	return *this;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{

	o << rhs.toFloat();

	return o;
};