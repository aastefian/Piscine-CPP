/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 15:28:18 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.class.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(void)
    : _name("noName"), _hitPoints(60), _maxHitPoints(60), _energyPoints(120),
      _maxEnergyPoints(120), _level(1), _meleeAttackDamage(60),
      _rangedAttackDamage(5), _armorDamageReduction(0), _ninjaShoeboxCost(25) {
  std::cout << "NinjaTrap created" << std::endl;
  this->_ClapTrapSays("Recompiling my combat code!");
  std::cout << std::endl;

  return;
}

NinjaTrap::NinjaTrap(std::string name)
    : _name(name), _hitPoints(60), _maxHitPoints(60), _energyPoints(120),
      _maxEnergyPoints(120), _level(1), _meleeAttackDamage(60),
      _rangedAttackDamage(5), _armorDamageReduction(0), _ninjaShoeboxCost(25) {

  this->_name = name;

  std::cout << "NinjaTrap created" << std::endl;
  this->_ClapTrapSays("Look out everybody! Things are about to get awesome!");
  std::cout << std::endl;

  return;
}

NinjaTrap::~NinjaTrap(void) {
  std::cout << std::endl << "NinjaTrap has been destroyed" << std::endl;
  return;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &target) {

  if (this->_energyPoints >= this->_ninjaShoeboxCost) {

    std::cout << " <" << this->_name << "> attacks " << target.getName() << std::endl;
    this->_ClapTrapSays("Take this ninja sword in your face!");
    this->takeEnergyPoints(this->_ninjaShoeboxCost);
  } else {
    this->_ClapTrapSays("No more juice pal!");
  }

  return;
}

void NinjaTrap::ninjaShoebox(FragTrap const &target) {

  if (this->_energyPoints >= this->_ninjaShoeboxCost) {

    std::cout << " <" << this->_name << "> attacks " << target.getName() << std::endl;
    this->_ClapTrapSays("Take this ninja sword in your face!");
    this->takeEnergyPoints(this->_ninjaShoeboxCost);
  } else {
    this->_ClapTrapSays("No more juice pal!");
  }

  return;
}

void NinjaTrap::ninjaShoebox(ClapTrap const &target) {

  if (this->_energyPoints >= this->_ninjaShoeboxCost) {

    std::cout << " <" << this->_name << "> attacks " << target.getName() << std::endl;
    this->_ClapTrapSays("Take this ninja sword in your face!");
    this->takeEnergyPoints(this->_ninjaShoeboxCost);
  } else {
    this->_ClapTrapSays("No more juice pal!");
  }

  return;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &target) {

  if (this->_energyPoints >= this->_ninjaShoeboxCost) {

    std::cout << " <" << this->_name << "> says hi to " << target.getName() << " cause they are alike and the don't attack each other" << std::endl;
    this->takeEnergyPoints(this->_ninjaShoeboxCost);
  } else {
    this->_ClapTrapSays("No more juice pal!");
  }

  return;
}

void NinjaTrap::_ClapTrapSays(std::string message) {

  std::cout << " "
            << this->_coloredText(this->_name, ClapTrap::green, ClapTrap::reset)
            << ": " << message << std::endl;

  return;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs) {

  this->_ninjaShoeboxCost = rhs._ninjaShoeboxCost;
  this->_name = rhs._name;
  this->_hitPoints = rhs._hitPoints;
  this->_maxHitPoints = rhs._maxHitPoints;
  this->_energyPoints = rhs._energyPoints;
  this->_maxEnergyPoints = rhs._maxEnergyPoints;
  this->_level = rhs._level;
  this->_meleeAttackDamage = rhs._meleeAttackDamage;
  this->_rangedAttackDamage = rhs._rangedAttackDamage;
  this->_armorDamageReduction = rhs._rangedAttackDamage;

  return *this;
}
