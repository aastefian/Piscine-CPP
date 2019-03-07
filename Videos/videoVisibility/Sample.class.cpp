/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/01 15:25:48 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();

	return;
}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::publicBar( void ) const {

	std::cout << "Member function publicBar called" << std::endl;
	return;
}

void	Sample::_privateBar( void ) const {

	std::cout << "Member function _privateBar called" << std::endl;
	return;
}
