/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:13:38 by svilau            #+#    #+#             */
/*   Updated: 2018/10/04 10:29:31 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.class.hpp"
#include "ZombieEvent.class.hpp"

int main( void ) {

	ZombieEvent testEvent;

	Zombie*		zombies[10];

	for( int i = 0; i < 10; i++ ) {
		zombies[i] = testEvent.randomChump();
		std::cout << std::endl;
	}

	for( int i = 0; i < 10; i++ ) {
		delete 	zombies[i];
	}

	srand(time(NULL));

	return 0;
}
