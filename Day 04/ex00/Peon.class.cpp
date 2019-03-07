/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 13:53:10 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.class.hpp"
#include <iostream>

// Constructor
Peon::Peon(std::string name) : Victim(name) {

  std::cout << "Zog zog." << std::endl;

  return;
}

// Destructor
Peon::~Peon(void) {

  std::cout << "Bleuark..." << std::endl;

  return;
}

// Member functions
std::string Peon::introduceYourself(void) const {

  return "I am " + this->getName() + ", and I like otters !\n";
}

void Peon::getPolymorphed(void) const {

  std::cout << this->getName() << " has been turned into a pink pony !"
            << std::endl;

  return;
}

// Operators
Peon &Peon::operator=(Peon const &rhs) {

  this->getName() = rhs.getName();

  return *this;
}

std::ostream &operator<<(std::ostream &o, Peon const &rhs) {

  o << rhs.introduceYourself();

  return o;
};
