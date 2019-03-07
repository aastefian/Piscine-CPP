/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/01 16:00:14 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;

	return;
}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;
	return;
}

int	Sample::getFoo( void ) const {

	return this->_foo;
}

void	Sample::setFoo( int v ) {

	if( v>= 0 )
		this->_foo = v;

	return;
}
