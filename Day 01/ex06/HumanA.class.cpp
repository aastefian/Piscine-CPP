/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 16:46:19 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "HumanA.class.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon) {

	// std::cout << "HumanA has been created" << std::endl;
	return;
}

HumanA::~HumanA( void ) {

	// std::cout << "HumanA been destroyed" << std::endl;
	return;
}

void				HumanA::attack( void ) const {

	std::cout << this->_name << " attacks with his " << this->_weapon.getType()  << std::endl;

	return;
};

void				HumanA::setWeapon( Weapon weapon ) {

	this->_weapon = weapon;

	return;
};
