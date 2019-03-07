/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/01 12:50:15 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.class.hpp"

Pony::Pony( int age, int numLegs, std::string color ) : age(age), numLegs(numLegs), color(color) {
	std::cout << "Pony has been born" << std::endl;
	return;
}

Pony::~Pony( void ) {
	std::cout << "Pony has died (happily and peacefully)" << std::endl;
	return;
}

void	Pony::ponyOnTheHeap( void ) {

	Pony*	heapPony = new Pony( 20, 100, "yellow" );
	delete	heapPony;

	return;
};

void	Pony::ponyOnTheStack( void ) {

	Pony	stackPony( 0, 4, "red" );

	return;
};

