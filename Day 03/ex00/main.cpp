/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:13:38 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 11:42:15 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.class.hpp"

int main( void ) {

	FragTrap	fragTrap("Shorty");

	srand(time(NULL));
	fragTrap.vaulthunter_dot_exe("Dog");
	std::cout << std::endl;
	fragTrap.vaulthunter_dot_exe("Dog");
	std::cout << std::endl;
	fragTrap.vaulthunter_dot_exe("Dog");
	std::cout << std::endl;
	fragTrap.vaulthunter_dot_exe("Dog");
	std::cout << std::endl;
	fragTrap.vaulthunter_dot_exe("Dog");
	std::cout << std::endl;
	fragTrap.takeDamage(105);
	std::cout << std::endl;
	fragTrap.beRepaired(2000);

	return 0;
}
