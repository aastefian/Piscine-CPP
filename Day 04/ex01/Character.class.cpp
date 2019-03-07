/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                   :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 12:07:07 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <iostream>

// Classes
#include "AWeapon.class.hpp"
#include "Character.class.hpp"

// Constructor
Character::Character(std::string const &name)
    : _name(name), _ap(40), _maxAp(40), _currentWeapon(NULL) {

  return;
}

// Destructor
Character::~Character(void) { return; }

// Member functions
unsigned int Character::getAP(void) const { return this->_ap; }

void Character::recoverAP(void) {

  unsigned int newAP = this->_ap + 10;
  if (newAP >= this->_maxAp) {
    this->_ap = this->_maxAp;
  } else {
    this->_ap = newAP;
  }
  std::cout << this->_name << " recovers some AP points" << std::endl;

  return;
}

void Character::takeAP(unsigned int amount) {

  int newAP = this->_ap - amount;
  if (newAP < 0) {
    this->_ap = 0;
  } else {
    this->_ap = newAP;
  }

  return;
}

AWeapon *Character::getCurrentWeapon(void) const {
  return this->_currentWeapon;
}

void Character::equip(AWeapon *weapon) {

  this->_currentWeapon = weapon;

  return;
}

void Character::attack(Enemy *enemy) {

  std:: cout << enemy->getType() << std::endl;
  if (!enemy->getHP()) {
    return;
  }

  if (this->_ap >= this->_currentWeapon->getAPCost() && this->_currentWeapon) {
    std::cout << this->_name
    << " attacks " << enemy->getType() << " with a "
              << this->_currentWeapon->getName() << std::endl;
    this->_currentWeapon->attack();
    this->takeAP(this->_currentWeapon->getAPCost());
    enemy->takeDamage(this->_currentWeapon->getDamage());
    if (enemy->getHP() <= 0) {
      delete enemy;
      // enemy = NULL;
    }
  } else {
    std::cout << "Cannot attack, not enough AP points !" << std::endl;
  }

  return;
}

std::string Character::getName(void) const { return this->_name; }
void Character::setName(std::string const name) {

  this->_name = name;

  return;
}

// Operators
Character &Character::operator=(Character const &rhs) {

  this->_name = rhs._name;
  this->_ap = rhs._ap;

  return *this;
}

std::ostream &operator<<(std::ostream &o, Character const &rhs) {

  if (rhs.getCurrentWeapon()) {
    o << rhs.getName() + " has " + std::to_string(rhs.getAP()) +
             " AP and wields a " + rhs.getCurrentWeapon()->getName()
      << std::endl;
  } else {
    o << rhs.getName() + " has " + std::to_string(rhs.getAP()) +
             " AP and is unnarmed"
      << std::endl;
  }
  return o;
};
