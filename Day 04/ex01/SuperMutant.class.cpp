/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.class.cpp                                   :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 12:07:07 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.class.hpp"
#include <iostream>

// Constructor
SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {

  std::cout << "Gaaah. Me want smash heads !" << std::endl;

  return;
}

// Destructor
SuperMutant::~SuperMutant(void) {

  std::cout << "Aaargh ..." << std::endl;

  return;
}

// Member functions
void SuperMutant::takeDamage(unsigned int amount) {

if(this->getHP() >= amount)
  this->setHP(this->getHP() - amount);
  else
  this->setHP(0);
  return;
}

// Operators
SuperMutant &SuperMutant::operator=(SuperMutant const &rhs) {

  this->setType(rhs.getType());
  this->setHP(rhs.getHP());

  return *this;
}

std::ostream &operator<<(std::ostream &o, SuperMutant const &rhs) {

  o << rhs.getType();

  return o;
};
