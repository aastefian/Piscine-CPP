/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:13:38 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 18:02:09 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "NinjaTrap.class.hpp"
#include "SuperTrap.class.hpp"

int main( void ) {

	ScavTrap	hodor("Hodor");
	FragTrap	shorty("Shorty");
	NinjaTrap	ninja("Ninja");
	SuperTrap	testSuperTrap("Superman");

	srand(time(NULL));
	testSuperTrap.vaulthunter_dot_exe("toto");

	return 0;
}
