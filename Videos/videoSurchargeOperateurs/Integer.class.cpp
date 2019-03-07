/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:49:37 by svilau            #+#    #+#             */
/*   Updated: 2018/10/04 11:46:23 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Class
#include "Integer.class.hpp"

Integer::Integer(int const n) : _n(n)
{

	// std::cout << "Construct" << std::endl;
	return;
}

Integer::~Integer(void)
{

	// std::cout << "Integer been destroyed" << std::endl;
	return;
}

int Integer::getValue(void) const
{

	return this->_n;
};

Integer& Integer::operator=(Integer const &rhs)
{

	this->_n = rhs.getValue();

	return *this;
};

Integer Integer::operator+(Integer const &rhs) const
{

	std::cout << "Adding" << rhs.getValue() << "with" << this->_n << std::endl;

	return Integer( this->_n + rhs.getValue() );
};

std::ostream &operator<<(std::ostream &o, Integer const &rhs)
{

	o << rhs.getValue();
	return o;
};