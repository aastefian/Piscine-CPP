/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 12:41:48 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Brain.class.hpp"

Brain::Brain( void ) {
	std::cout << "Brain has been born" << std::endl;
	return;
}

Brain::~Brain( void ) {
	std::cout << "Brain has died (happily and peacefully)" << std::endl;
	return;
}

std::string	Brain::identify( void ) const {

	std::string adress;
	std::stringstream ss;
	ss << this;
	ss >> adress;

	return adress;
};
