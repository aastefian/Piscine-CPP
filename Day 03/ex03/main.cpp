/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:13:38 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 16:23:23 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "NinjaTrap.class.hpp"

int main( void ) {

	ScavTrap	hodor("Hodor");
	FragTrap	shorty("Shorty");
	NinjaTrap	ninja("Ninja");

	srand(time(NULL));
	// hodor.challengeNewComer("Shorty");
	// std::cout << std::endl;
	hodor.challengeNewComer("Shorty");
	std::cout << std::endl;
	shorty.vaulthunter_dot_exe("Hodor");
	std::cout << std::endl;
	ninja.ninjaShoebox(shorty);
	std::cout << std::endl;

	// hodor.takeDamage(105);
	// std::cout << std::endl;
	// shorty.takeDamage(105);
	// std::cout << std::endl;

	// hodor.beRepaired(2000);
	// std::cout << std::endl;
	// shorty.beRepaired(2000);
	// std::cout << std::endl;

	return 0;
}
