/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.class.cpp                                   :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 12:07:07 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.class.hpp"
#include <iostream>

// Constructor
AWeapon::AWeapon(std::string const &name, int apcost, int damage)
    : _name(name), _apcost(apcost), _damage(damage) {

  return;
}

// Destructor
AWeapon::~AWeapon(void) { return; }

// Member functions
std::string AWeapon::getName(void) const { return this->_name; }
void AWeapon::setName(std::string const name) {

  this->_name = name;

  return;
}

unsigned int AWeapon::getAPCost(void) const { return this->_apcost; }
void AWeapon::setAPCost(unsigned int const apcost) {
  this->_apcost = apcost;
  return;
}

unsigned int AWeapon::getDamage(void) const { return this->_damage; }
void AWeapon::setDamage(unsigned int const damage) {
  this->_damage = damage;
  return;
}

// Operators
AWeapon &AWeapon::operator=(AWeapon const &rhs) {

  this->_name = rhs._name;
  this->_apcost = rhs._apcost;
  this->_damage = rhs._damage;

  return *this;
}

std::ostream &operator<<(std::ostream &o, AWeapon const &rhs) {

  o << rhs.getName();

  return o;
};
