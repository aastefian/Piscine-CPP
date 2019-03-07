/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.class.cpp                                   :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 12:07:07 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.class.hpp"
#include <iostream>

// Constructor
PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) { return; }

// Destructor
PlasmaRifle::~PlasmaRifle(void) { return; }

// Member functions
void PlasmaRifle::attack(void) const {

  std::cout << "* piouuu piouuu piouuu *" << std::endl;

  return;
}

// Operators
PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs) {

  this->setName(rhs.getName());
  this->setDamage(rhs.getDamage());
  this->setAPCost(rhs.getAPCost());

  return *this;
}

std::ostream &operator<<(std::ostream &o, PlasmaRifle const &rhs) {

  o << rhs.getName();

  return o;
};
