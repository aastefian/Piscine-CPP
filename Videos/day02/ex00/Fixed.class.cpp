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

Fixed::Fixed(void) : _fixedPointValue(0) {

  std::cout << "Default constructor called" << std::endl;
  return;
}

Fixed::~Fixed(void) {

  std::cout << "Destructor called" << std::endl;
  return;
}

Fixed::Fixed(Fixed const &src) {

  std::cout << "Copy constructor called" << std::endl;
  *this = src;

  return;
}

int Fixed::getRawBits(void) const {

  std::cout << "getRawBits member function called" << std::endl;
  return this->_fixedPointValue;
};

void Fixed::setRawBits(int const raw) {

  this->_fixedPointValue = raw;

  return;
};

Fixed &Fixed::operator=(Fixed const &rhs) {

  std::cout << "Assignation operator called" << std::endl;
  this->_fixedPointValue = rhs.getRawBits();

  return *this;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {

  o << rhs.getRawBits();

  return o;
};

static int const _fractionalBits = 9;
