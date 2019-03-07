/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 15:31:10 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include <iostream>

ClapTrap::ClapTrap(void)
    : _name("noName"), _type("noType"), _hitPoints(100), _maxHitPoints(100),
      _energyPoints(100), _maxEnergyPoints(100), _level(1),
      _meleeAttackDamage(30), _rangedAttackDamage(20),
      _armorDamageReduction(5) {
  std::cout << "ClapTrap created" << std::endl;
  std::cout << std::endl;

  return;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _type("noType"), _hitPoints(100), _maxHitPoints(100),
      _energyPoints(100), _maxEnergyPoints(100), _level(1),
      _meleeAttackDamage(30), _rangedAttackDamage(20),
      _armorDamageReduction(5) {
  std::cout << "ClapTrap created" << std::endl;
  std::cout << std::endl;

  return;
}

ClapTrap::~ClapTrap(void) {
  std::cout << std::endl << "ClapTrap has been destroyed" << std::endl;
  return;
}

void ClapTrap::meleeAttack(std::string const &target) {
  std::cout <<  " <" << this->_name << "> hits with a bat <" << target
            << ">, causing " << this->_meleeAttackDamage
            << " points of damage !" << std::endl;

  int const poolSize = 4;
  std::string meleeAttackDialogs[poolSize] = {
      "Hyah!",
      "Heyyah!",
      "Take that!",
      "Bop!",
  };
  this->_ClapTrapSays(meleeAttackDialogs[rand() % poolSize]);

  return;
}

void ClapTrap::rangedAttack(std::string const &target) {
  std::cout <<  " <" << this->_name << "> launched EMP wave on <"
            << target << ">, causing " << this->_rangedAttackDamage
            << " points of damage !" << std::endl;

  int const poolSize = 7;
  std::string rangedAttackDialogs[poolSize] = {
      "Da, da da da! It's electric!",
      "I'm rubbing my wheel on the carpet!",
      "I've finally got an electric personality!",
      "Shocking, isn't it?",
      "Lightening! Kukachow!",
      "Zippity doodah!",
      "You may experience butterflies in your circuits! Like love \
      butterflies... HIGH VOLTAGE LOVE BUTTERFLIES!!"};
  this->_ClapTrapSays(rangedAttackDialogs[rand() % poolSize]);

  return;
}

void ClapTrap::takeDamage(unsigned int amount) {

  std::cout <<  " <" << this->_name << "> took " << amount << " damage !"
            << std::endl;
  this->_hitPoints -= (amount - this->_armorDamageReduction);
  if (this->_hitPoints == 0) {
    this->_ClapTrapSays(
        "Ohh I.....can.... see.. ARGHhhhfs.. THE LIGHT ~windows xp "
        "tuning off sound~");

    std::cout <<  " <" << this->_name << "> is dead !" << std::endl;
  }

  return;
}

void ClapTrap::takeEnergyPoints(unsigned int amount) {

  this->_energyPoints -= amount;

  return;
}

void ClapTrap::beRepaired(unsigned int amount) {

  std::cout <<  " <" << this->_name << "> is being repaired !"
            << std::endl;
  unsigned int newHitPointsAmout = this->_hitPoints + amount;
  if (newHitPointsAmout > this->_maxHitPoints) {
    this->_hitPoints = this->_maxHitPoints;
    this->_ClapTrapSays("I'm alll JUICED up now!");
  } else {
    this->_hitPoints = newHitPointsAmout;
    this->_ClapTrapSays("Sweet life juice!");
  }
  std::cout <<  " <" << this->_name << "> health is now "
            << this->_hitPoints << " !" << std::endl;

  return;
}

void ClapTrap::_ClapTrapSays(std::string message) {

  std::cout <<  " "
            << this->_coloredText(this->_name, ClapTrap::green, ClapTrap::reset)
            << ": " << message << std::endl;

  return;
}

std::string ClapTrap::_coloredText(std::string text, std::string const color,
                                   std::string reset) const {
  return color + text + reset;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {

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

// Color for print-out
const std::string ClapTrap::red = "\033[0;31m";
const std::string ClapTrap::green = "\033[1;32m";
const std::string ClapTrap::yellow = "\033[1;33m";
const std::string ClapTrap::cyan = "\033[0;36m";
const std::string ClapTrap::magenta = "\033[0;35m";
const std::string ClapTrap::reset = "\033[0m";
