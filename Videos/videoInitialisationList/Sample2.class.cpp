/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/01 14:54:52 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2( char p1, int p2, float p3 ) : a1(p1), a2(p2), a3(p3) {

	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1: " << this->a1 << std::endl;
	std::cout << "this->a2: " << this->a2 << std::endl;
	std::cout << "this->a3: " << this->a3 << std::endl;

	return;
}

Sample2::~Sample2( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample2::bar( void ) {
	std::cout << "Member function bar called" << std::endl;
	return;
}
