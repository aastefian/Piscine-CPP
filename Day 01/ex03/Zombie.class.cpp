/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 12:41:48 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.class.hpp"

Zombie::Zombie( void ) : type("noType"), name("noName") {
	// std::cout << "Zombie has been born" << std::endl;
	return;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie has died (happily and peacefully)" << std::endl;
	return;
}

void	Zombie::announce( void ) {

	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;

	return;
};
