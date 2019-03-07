/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 16:36:18 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Weapon.class.hpp"

Weapon::Weapon( std::string type ) : _type( type ) {

	// std::cout << "Weapon has been created" << std::endl;
	return;
}

Weapon::~Weapon( void ) {

	// std::cout << "Weapon been destroyed" << std::endl;
	return;
}

const std::string&	Weapon::getType( void ) const {

	return this->_type;
};

void				Weapon::setType( std::string weaponType ) {

	this->_type = weaponType;

	return;
};
