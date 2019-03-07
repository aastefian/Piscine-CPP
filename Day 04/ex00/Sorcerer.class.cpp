/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 13:52:49 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.class.hpp"
#include <iostream>

// Constructor
Sorcerer::Sorcerer(std::string name, std::string title)
    : _name(name), _title(title) {

  std::cout << this->_name << ", " << this->_title << ", is born !"
            << std::endl;

  return;
}

// Destructor
Sorcerer::~Sorcerer(void) {

  std::cout << this->_name << ", " << this->_title
            << ", is dead. Consequences will never be the same !" << std::endl;

  return;
}

// Member functions
void Sorcerer::polymorph(Victim const &victim) const {

  victim.getPolymorphed();

  return;
}

std::string Sorcerer::introduceYourself(void) const {

  return "I am " + this->_name + ", " + this->_title + ", and I like ponies !\n";
}

// Operators
Sorcerer &Sorcerer::operator=(Sorcerer const &rhs) {

  this->_name = rhs._name;
  this->_title = rhs._title;

  return *this;
}

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs) {

  o << rhs.introduceYourself();

  return o;
};
