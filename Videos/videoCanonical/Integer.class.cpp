/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:49:37 by svilau            #+#    #+#             */
/*   Updated: 2018/10/04 12:20:32 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Class
#include "Integer.class.hpp"

Integer::Integer(void) : _foo(0)
{

	// std::cout << "Default constructor called" << std::endl;
	return;
}

Integer::Integer(const int n) : _foo(n)
{

	// std::cout << "Second constructor called" << std::endl;
	return;
}

Integer::~Integer(void)
{

	// std::cout << "Default destructor called" << std::endl;
	return;
}

Integer::Integer(Integer const &src)
{

	*this = src;

	return;
}

int Integer::getFoo(void) const
{

	return this->_foo;
};

Integer &Integer::operator=(Integer const &rhs)
{

	this->_foo = rhs.getFoo();

	return *this;
};

std::ostream &operator<<(std::ostream &o, Integer const &rhs)
{

	o << rhs.getFoo();

	return o;
};