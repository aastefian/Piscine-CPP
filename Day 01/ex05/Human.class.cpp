/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 12:41:48 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Human.class.hpp"
#include "Brain.class.hpp"

Human::Human( void ) : _newBrain() {

	std::cout << "Human has been born" << std::endl;
	return;
}

Human::~Human( void ) {

	std::cout << "Human has died (happily and peacefully)" << std::endl;
	return;
}

std::string		Human::identify( void ) {

	return this->_newBrain.identify();
};

const Brain&	Human::getBrain( void ) {

	return this->_newBrain;
};
