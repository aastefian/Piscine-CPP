/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:39:23 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 12:57:41 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <iostream>
#include <cstdlib>
#include <string>

// Classes
#include "ZombieHorde.class.hpp"
#include "Zombie.class.hpp"

ZombieHorde::ZombieHorde( int N ) : numZombies(N) {

	this->zombies = new Zombie*[this->numZombies];

	for( int i = 0; i < this->numZombies; i++ ) {
		this->setZombieType( "walker" );
		this->zombies[i] = this->randomChump();
	}

	std::cout << "ZombieHorde has been created" << std::endl;
	return;
}

ZombieHorde::~ZombieHorde( void ) {

	for( int i = 0; i < this->numZombies; i++ ) {
		delete this->zombies[i];
	}
	delete [] this->zombies;

	std::cout << "ZombieHorde has been defeated" << std::endl;
	return;
}

void	ZombieHorde::setZombieType( std::string zombieType ) {

	this->type = zombieType;

	return;
};

Zombie*	ZombieHorde::newZombie( std::string name ) {

	Zombie*	newZombie = new Zombie;
	newZombie->name = name;
	newZombie->type = this->type;

	return newZombie;
};

Zombie*	ZombieHorde::randomChump( void ) {

	std::string 	randomName;
	const int		poolSize = 10;
	std::string		namePool[poolSize] = { "Tom", "Harvey", "Max", "Dumby", "Dumbo", "Pony", "Terminator", "Norminet", "Toto", "Coco" };

	randomName = namePool[rand () % poolSize];
	Zombie* newBorn = ZombieHorde::newZombie( randomName );

	return newBorn;
};

void	ZombieHorde::announce( void ) const {

	for( int i = 0; i < this->numZombies; i++ ) {
		this->zombies[i]->announce();
	}

	return;
};
