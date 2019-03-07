/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.class.cpp                                   :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 12:07:07 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.class.hpp"
#include <iostream>

// Constructor
PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) { return; }

// Destructor
PowerFist::~PowerFist(void) { return; }

// Member functions
void PowerFist::attack(void) const {

  std::cout << "* pschhh... SBAM! *" << std::endl;

  return;
}

// Operators
PowerFist &PowerFist::operator=(PowerFist const &rhs) {

  this->setName(rhs.getName());
  this->setDamage(rhs.getDamage());
  this->setAPCost(rhs.getAPCost());

  return *this;
}

std::ostream &operator<<(std::ostream &o, PowerFist const &rhs) {

  o << rhs.getName();

  return o;
};

struct list {
  void *data;
  list *next;
};
