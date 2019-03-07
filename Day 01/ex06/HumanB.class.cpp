/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 17:01:44 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "HumanB.class.hpp"
#include "Weapon.class.hpp"

HumanB::HumanB( std::string name ) : _name( name ) {

	// std::cout << "HumanB has been created" << std::endl;
	return;
}

HumanB::~HumanB( void ) {

	// std::cout << "HumanB been destroyed" << std::endl;
	return;
}

void				HumanB::attack( void ) const {

	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;

	return;
};

void				HumanB::setWeapon( Weapon& weapon ) {

	this->_weapon = &weapon;

	return;
};
