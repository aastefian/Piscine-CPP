/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.class.cpp                                 :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 15:28:18 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.class.hpp"
#include <iostream>

SuperTrap::SuperTrap(void)
    : _name("noName"), _hitPoints(FragTrap::_hitPoints), _maxHitPoints(FragTrap::_maxHitPoints), _energyPoints(NinjaTrap::_energyPoints),
      _maxEnergyPoints(NinjaTrap::_maxEnergyPoints), _level(1), _meleeAttackDamage(NinjaTrap::_meleeAttackDamage),
      _rangedAttackDamage(FragTrap::_rangedAttackDamage), _armorDamageReduction(FragTrap::_armorDamageReduction), _ninjaShoeboxCost(25) {
  std::cout << "SuperTrap created" << std::endl;
  this->_ClapTrapSays("Building super powerful attack programs!");
  std::cout << std::endl;

  return;
}

SuperTrap::SuperTrap(std::string name)
    : _name(name), _hitPoints(FragTrap::_hitPoints), _maxHitPoints(FragTrap::_maxHitPoints), _energyPoints(NinjaTrap::_energyPoints),
      _maxEnergyPoints(NinjaTrap::_maxEnergyPoints), _level(1), _meleeAttackDamage(NinjaTrap::_meleeAttackDamage),
      _rangedAttackDamage(FragTrap::_rangedAttackDamage), _armorDamageReduction(FragTrap::_armorDamageReduction), _ninjaShoeboxCost(25) {

  // this->_name = name;

  std::cout << "SuperTrap created" << this->_name << std::endl;
  this->_ClapTrapSays("Building super powerful attack programs!");
  std::cout << std::endl;

  return;
}

SuperTrap::~SuperTrap(void) {
  std::cout << std::endl << "SuperTrap has been destroyed" << std::endl;
  return;
}

void SuperTrap::_ClapTrapSays(std::string message) {

  std::cout << " "
            << this->_coloredText(this->_name, ClapTrap::green, ClapTrap::reset)
            << ": " << message << std::endl;

  return;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &rhs) {

  this->_ninjaShoeboxCost = rhs._ninjaShoeboxCost;
  this->_name = rhs._name;
  this->_hitPoints = rhs._hitPoints;
  this->_maxHitPoints = rhs._maxHitPoints;
  this->_energyPoints = rhs._energyPoints;
  this->_maxEnergyPoints = rhs._maxEnergyPoints;
  this->_level = rhs._level;
  this->_meleeAttackDamage = rhs._meleeAttackDamage;
  this->_rangedAttackDamage = rhs._rangedAttackDamage;
  this->_armorDamageReduction = rhs._armorDamageReduction;
  // this->_ninjaShoeboxCost = rhs._ninjaShoeboxCost;
  // this->_name = rhs._name;
  // this->FragTrap::_hitPoints = rhs.FragTrap::_hitPoints;
  // this->FragTrap::_maxHitPoints = rhs.FragTrap::_maxHitPoints;
  // this->NinjaTrap::_energyPoints = rhs.NinjaTrap::_energyPoints;
  // this->NinjaTrap::_maxEnergyPoints = rhs.NinjaTrap::_maxEnergyPoints;
  // this->_level = rhs._level;
  // this->NinjaTrap::_meleeAttackDamage = rhs.NinjaTrap::_meleeAttackDamage;
  // this->FragTrap::_rangedAttackDamage = rhs.FragTrap::_rangedAttackDamage;
  // this->FragTrap::_armorDamageReduction = rhs.FragTrap::_armorDamageReduction;

  return *this;
}
