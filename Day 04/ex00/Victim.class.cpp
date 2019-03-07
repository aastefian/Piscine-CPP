/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.class.cpp                                   :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 12:07:07 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.class.hpp"
#include <iostream>

// Constructor
Victim::Victim(std::string name) : _name(name) {

  std::cout << "Some random victim called " << this->_name << " just popped !"
            << std::endl;

  return;
}

// Destructor
Victim::~Victim(void) {

  std::cout << "Victim " << this->_name
            << " just died for no apparent reason !" << std::endl;

  return;
}

// Member functions
std::string Victim::introduceYourself(void) const {

  return "I am " + this->_name + ", and I like otters !\n";
}

std::string Victim::getName(void) const { return this->_name; }

void Victim::getPolymorphed(void) const {

  std::cout << this->_name << " has been turned into a cute little sheep !"
            << std::endl;

  return;
}

// Operators
Victim &Victim::operator=(Victim const &rhs) {

  this->_name = rhs._name;

  return *this;
}

std::ostream &operator<<(std::ostream &o, Victim const &rhs) {

  o << rhs.introduceYourself();

  return o;
};
