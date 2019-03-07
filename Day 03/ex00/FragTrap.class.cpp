/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 15:43:30 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include <iostream>

FragTrap::FragTrap(void)
    : _name("noName"), _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
      _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30),
      _rangedAttackDamage(20), _armorDamageReduction(5),
      _vaulthunterDotExeCost(25) {
  std::cout << "FragTrap created" << std::endl;
  this->_fragTrapSays("Recompiling my combat code!");
  std::cout << std::endl;

  return;
}

FragTrap::FragTrap(std::string name)
    : _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
      _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30),
      _rangedAttackDamage(20), _minionTrapDamage(5), _freezingAttackDamage(60),
      _throwingGrenadeDamage(20), _armorDamageReduction(5),
      _vaulthunterDotExeCost(25) {
  std::cout << "FragTrap created" << std::endl;
  this->_fragTrapSays("Recompiling my combat code!");
  std::cout << std::endl;

  return;
}

FragTrap::~FragTrap(void) {
  std::cout << std::endl << "FragTrap has been destroyed" << std::endl;
  return;
}

void FragTrap::meleeAttack(std::string const &target) {
  std::cout << "FR4G-TP <" << this->_name << "> hits with a bat <" << target
            << ">, causing " << this->_meleeAttackDamage
            << " points of damage !" << std::endl;

  int const poolSize = 4;
  std::string meleeAttackDialogs[poolSize] = {
      "Hyah!",
      "Heyyah!",
      "Take that!",
      "Bop!",
  };
  this->_fragTrapSays(meleeAttackDialogs[rand() % poolSize]);

  return;
}

void FragTrap::rangedAttack(std::string const &target) {
  std::cout << "FR4G-TP <" << this->_name << "> launched EMP wave on <"
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
  this->_fragTrapSays(rangedAttackDialogs[rand() % poolSize]);

  return;
}

void FragTrap::minionTrap(std::string const &target) {

  std::cout << "FR4G-TP <" << this->_name << "> launches minions attack <"
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
  this->_fragTrapSays(minionTrapDialogs[rand() % poolSize]);

  return;
}

void FragTrap::freezingAttack(std::string const &target) {
  std::cout << "FR4G-TP <" << this->_name << "> freezes <" << target
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
  this->_fragTrapSays(freezingAttackDialogs[rand() % poolSize]);

  return;
}

void FragTrap::throwingGrenade(std::string const &target) {

  std::cout << "FR4G-TP <" << this->_name << "> throws grenade aiming <"
            << target << ">, causing " << this->_throwingGrenadeDamage
            << " points of damage !" << std::endl;

  int const poolSize = 10;
  std::string throwingGrenadeDialogs[poolSize] = {
      "'Nade out!",        "Grenade!",         "Grenaaaade!",
      "Hot potato!",       "Pull pin, throw!", "Take that!",
      "Throwing grenade!", "Bad guy go boom!", "Eat bomb, baddie!",
      "Present for you!"};
  this->_fragTrapSays(throwingGrenadeDialogs[rand() % poolSize]);

  return;
}

void FragTrap::lazerAttack(std::string const &target) {

  std::cout <<  " <" << this->_name << "> launches lazer aiming <"
            << target << ">, causing " << this->_lazerAttackDamage
            << " points of damage !" << std::endl;

  this->_fragTrapSays("You have been lazerified!");

  return;
}

void FragTrap::lavaRainAttack(std::string const &target) {

  std::cout <<  " <" << this->_name << "> starts lava rain <"
            << target << ">, causing " << this->_lavaRainAttackDamage
            << " points of damage !" << std::endl;

  this->_fragTrapSays("Eat lava you mean vertebrated species !");

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
    _fragTrapSays("No more juice pal!");
  }

  return;
}

void FragTrap::_fragTrapSays(std::string message) {

  std::cout << "FR4G-TP "
            << this->_coloredText(this->_name, FragTrap::green, FragTrap::reset)
            << ": " << message << std::endl;

  return;
}

void FragTrap::takeDamage(unsigned int amount) {

  std::cout << "FR4G-TP <" << this->_name << "> took " << amount << " damage !"
            << std::endl;
  this->_hitPoints -= (amount - this->_armorDamageReduction);
  if (this->_hitPoints == 0) {
    this->_fragTrapSays(
        "Ohh I.....can.... see.. ARGHhhhfs.. THE LIGHT ~windows xp "
        "tuning off sound~");

    std::cout << "FR4G-TP <" << this->_name << "> is dead !" << std::endl;
  }

  return;
}

void FragTrap::takeEnergyPoints(unsigned int amount) {

  this->_energyPoints -= amount;

  return;
}

void FragTrap::beRepaired(unsigned int amount) {

  std::cout << "FR4G-TP <" << this->_name << "> is being repaired !"
            << std::endl;
  unsigned int newHitPointsAmout = this->_hitPoints + amount;
  if (newHitPointsAmout > this->_maxHitPoints) {
    this->_hitPoints = this->_maxHitPoints;
    this->_fragTrapSays("I'm alll JUICED up now!");
  } else {
    this->_hitPoints = newHitPointsAmout;
    this->_fragTrapSays("Sweet life juice!");
  }
  std::cout << "FR4G-TP <" << this->_name << "> health is now "
            << this->_hitPoints << " !" << std::endl;

  return;
}

std::string FragTrap::_coloredText(std::string text, std::string const color,
                                   std::string reset) const {
  return color + text + reset;
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

// Color for print-out
const std::string FragTrap::red = "\033[0;31m";
const std::string FragTrap::green = "\033[1;32m";
const std::string FragTrap::yellow = "\033[1;33m";
const std::string FragTrap::cyan = "\033[0;36m";
const std::string FragTrap::magenta = "\033[0;35m";
const std::string FragTrap::reset = "\033[0m";
