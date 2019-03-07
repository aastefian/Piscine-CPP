/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 18:03:52 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include <iostream>

FragTrap::FragTrap(void)
    : _name("noName"), _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
      _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30),
      _rangedAttackDamage(20), _armorDamageReduction(5), _minionTrapDamage(5),
      _freezingAttackDamage(60), _throwingGrenadeDamage(20),
      _vaulthunterDotExeCost(25) {
  std::cout << "FragTrap created" << std::endl;
  this->_ClapTrapSays("Recompiling my combat code!");
  std::cout << std::endl;

  return;
}

FragTrap::FragTrap(std::string name)
    : _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
      _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30),
      _rangedAttackDamage(20), _armorDamageReduction(5), _minionTrapDamage(5),
      _freezingAttackDamage(60), _throwingGrenadeDamage(20),
      _vaulthunterDotExeCost(25) {

  this->_name = name;

  std::cout << "FragTrap created" << std::endl;
  this->_ClapTrapSays("Recompiling my combat code!");
  std::cout << std::endl;

  return;
}

FragTrap::~FragTrap(void) {
  std::cout << std::endl << "FragTrap has been destroyed" << std::endl;
  return;
}

void FragTrap::minionTrap(std::string const &target) {

  std::cout <<  " <" << this->_name << "> launches minions attack <"
            << target << ">, causing " << this->_minionTrapDamage
            << " points of damage !" << std::endl;

  int const poolSize = 5;
  std::string minionTrapDialogs[poolSize] = {
      "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!",
      "Score one for the turret-trap!",
      "Mini-trap on the field!",
      "100% more mini-trap turret!",
      "I'm going commando!",
  };
  this->_ClapTrapSays(minionTrapDialogs[rand() % poolSize]);

  return;
}

void FragTrap::freezingAttack(std::string const &target) {
  std::cout <<  " <" << this->_name << "> freezes <" << target
            << ">, causing " << this->_freezingAttackDamage
            << " points of damage !" << std::endl;

  int const poolSize = 12;
  std::string freezingAttackDialogs[poolSize] = {
      "Aww! Now I want a snow cone.",
      "Take a chill pill!",
      "Cryo me a river!",
      "Freeze! I don't know why I said that.",
      "Don't cryo!",
      "Frigid.",
      "Solid! Get it? As in... frozen?",
      "Icely done.",
      "You're a tiny glacier!",
      "Frozen and doh-zen.",
      "Freeze, in the reference of emotion!",
      "Freezy peezy!",
  };
  this->_ClapTrapSays(freezingAttackDialogs[rand() % poolSize]);

  return;
}

void FragTrap::throwingGrenade(std::string const &target) {

  std::cout <<  " <" << this->_name << "> throws grenade aiming <"
            << target << ">, causing " << this->_throwingGrenadeDamage
            << " points of damage !" << std::endl;

  int const poolSize = 10;
  std::string throwingGrenadeDialogs[poolSize] = {
      "'Nade out!",        "Grenade!",         "Grenaaaade!",
      "Hot potato!",       "Pull pin, throw!", "Take that!",
      "Throwing grenade!", "Bad guy go boom!", "Eat bomb, baddie!",
      "Present for you!"};
  this->_ClapTrapSays(throwingGrenadeDialogs[rand() % poolSize]);

  return;
}

void FragTrap::lazerAttack(std::string const &target) {

  std::cout <<  " <" << this->_name << "> launches lazer aiming <"
            << target << ">, causing " << this->_lazerAttackDamage
            << " points of damage !" << std::endl;

  this->_ClapTrapSays("You have been lazerified!");

  return;
}

void FragTrap::lavaRainAttack(std::string const &target) {

  std::cout <<  " <" << this->_name << "> starts lava rain <"
            << target << ">, causing " << this->_lavaRainAttackDamage
            << " points of damage !" << std::endl;

  this->_ClapTrapSays("Eat lava you mean vertebrated species !");

  return;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {

  int const totalAttacks = 5;
  std::string attacksNamePool[totalAttacks] = {"meleeAttack", "rangedAttack",
                                               "minionTrap", "freezingAttack",
                                               "throwingGrenade"};
  typedef void (FragTrap::*Attacks)(std::string const &target);
  Attacks attacksPointerPool[totalAttacks] = {
      &FragTrap::meleeAttack, &FragTrap::rangedAttack, &FragTrap::minionTrap,
      &FragTrap::freezingAttack, &FragTrap::throwingGrenade};

  if (this->_energyPoints >= this->_vaulthunterDotExeCost) {
    int randomNumber = rand() % totalAttacks;
    (this->*(attacksPointerPool[randomNumber]))(target);
    this->takeEnergyPoints(this->_vaulthunterDotExeCost);
  } else {
    _ClapTrapSays("No more juice pal!");
  }

  return;
}

void FragTrap::_ClapTrapSays(std::string message) {

  std::cout <<  " "
            << this->_coloredText(this->_name, ClapTrap::green, ClapTrap::reset)
            << ": " << message << std::endl;

  return;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {

  this->_minionTrapDamage = rhs._minionTrapDamage;
  this->_freezingAttackDamage = rhs._freezingAttackDamage;
  this->_throwingGrenadeDamage = rhs._throwingGrenadeDamage;
  this->_lazerAttackDamage = rhs._lazerAttackDamage;
  this->_lavaRainAttackDamage = rhs._lavaRainAttackDamage;
  this->_vaulthunterDotExeCost = rhs._vaulthunterDotExeCost;
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
