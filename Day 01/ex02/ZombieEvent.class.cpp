/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:39:23 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 11:44:37 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <iostream>
#include <cstdlib>
#include <string>

// Classes
#include "ZombieEvent.class.hpp"
#include "Zombie.class.hpp"

ZombieEvent::ZombieEvent( void ) : type( "walker" ){
	std::cout << "ZombieEvent has been born" << std::endl;
	return;
}

ZombieEvent::~ZombieEvent( void ) {
	std::cout << "ZombieEvent has died (happily and peacefully)" << std::endl;
	return;
}

void	ZombieEvent::setZombieType( std::string zombieType ) {

	this->type = zombieType;

	return;
};

Zombie*	ZombieEvent::newZombie( std::string name ) {

	Zombie*	newZombie = new Zombie( name, this->type );

	return newZombie;
};

Zombie*	ZombieEvent::randomChump( void ) {

	std::string 	randomName;
	const int		poolSize = 10;
	std::string		namePool[poolSize] = { "Tom", "Harvey", "Max", "Dumby", "Dumbo", "Pony", "Terminator", "Norminet", "Toto", "Coco" };

	randomName = namePool[rand () % poolSize];
	Zombie* newBorn = ZombieEvent::newZombie( randomName );
	newBorn->announce();

	return newBorn;
};
