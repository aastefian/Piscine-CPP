/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 18:08:41 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
    : _name("noName"), _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
      _maxEnergyPoints(50), _level(1), _meleeAttackDamage(20),
      _rangedAttackDamage(15), _armorDamageReduction(3),
      _challengeNewCommerCost(25) {
  std::cout << "ScavTrap created" << std::endl;
  this->_scavTrapSays("Recompiling my combat code!");
  std::cout << std::endl;

  return;
}

ScavTrap::ScavTrap(std::string name)
    : _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
      _maxEnergyPoints(50), _level(1), _meleeAttackDamage(20),
      _rangedAttackDamage(15), _armorDamageReduction(3),
      _challengeNewCommerCost(25) {

  this->_name = name;

  std::cout << "ScavTrap created" << std::endl;
  this->_scavTrapSays("Look out everybody! Things are about to get awesome!");
  std::cout << std::endl;

  return;
}

ScavTrap::~ScavTrap(void) {
  std::cout << std::endl << "ScavTrap has been destroyed" << std::endl;
  return;
}

void ScavTrap::meleeAttack(std::string const &target) {
  std::cout << "SC4V-TP <" << this->_name << "> hits with a bat <" << target
            << ">, causing " << this->_meleeAttackDamage
            << " points of damage !" << std::endl;

  int const poolSize = 4;
  std::string meleeAttackDialogs[poolSize] = {
      "Hyah!",
      "Heyyah!",
      "Take that!",
      "Bop!",
  };
  this->_scavTrapSays(meleeAttackDialogs[rand() % poolSize]);

  return;
}

void ScavTrap::rangedAttack(std::string const &target) {
  std::cout << "SC4V-TP <" << this->_name << "> launched EMP wave on <"
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
  this->_scavTrapSays(rangedAttackDialogs[rand() % poolSize]);

  return;
}

void ScavTrap::headhunterChallenge(void) {

  this->_scavTrapSays("You gotta kill 50 human enemies");

  return;
}

void ScavTrap::luckyShotChallenge(void) {

  this->_scavTrapSays("You gotta kill 100 enemies with Critical Hits");

  return;
}

void ScavTrap::relentlessChallenge(void) {

  this->_scavTrapSays("You gotta kill 5 enemies in succession with no more "
                      "than 7 seconds in between each kill");

  return;
}

void ScavTrap::actionHeroChallenge(void) {

  this->_scavTrapSays("You gotta kill 50 enemies using your Action Skill");

  return;
}

void ScavTrap::seasonedKillerChallenge(void) {

  this->_scavTrapSays("You gotta kill 500 enemies");

  return;
}

void ScavTrap::challengeNewComer(std::string const &target) {

  int const totalChallenges = 5;
  std::string challengesNamePool[totalChallenges] = {
      "headhunter", "luckyShot", "relentless", "actionHero",
      "seasonedKiller"};
  typedef void (ScavTrap::*Challenges)(void);
  Challenges challengesPointerPool[totalChallenges] = {
      &ScavTrap::headhunterChallenge, &ScavTrap::luckyShotChallenge,
      &ScavTrap::relentlessChallenge, &ScavTrap::actionHeroChallenge,
      &ScavTrap::seasonedKillerChallenge};

  if (this->_energyPoints >= this->_challengeNewCommerCost) {
    int randomNumber = rand() % totalChallenges;

    std::cout << "SC4V-TP <" << this->_name << "> challenges <" << target
              << "> to " << challengesNamePool[randomNumber] << " challenge !"
              << std::endl;

    (this->*(challengesPointerPool[randomNumber]))();
    this->takeEnergyPoints(this->_challengeNewCommerCost);
  } else {
    this->_scavTrapSays("No more juice pal!");
  }

  return;
}

void ScavTrap::_scavTrapSays(std::string message) {

  std::cout << "SC4V-TP "
            << this->_coloredText(this->_name, ScavTrap::green, ScavTrap::reset)
            << ": " << message << std::endl;

  return;
}

void ScavTrap::takeDamage(unsigned int amount) {

  std::cout << "SC4V-TP <" << this->_name << "> took " << amount << " damage !"
            << std::endl;
  this->_hitPoints -= (amount - this->_armorDamageReduction);
  if (this->_hitPoints == 0) {
    this->_scavTrapSays(
        "Ohh I.....can.... see.. ARGHhhhfs.. THE LIGHT ~windows xp "
        "tuning off sound~");

    std::cout << "SC4V-TP <" << this->_name << "> is dead !" << std::endl;
  }

  return;
}

void ScavTrap::takeEnergyPoints(unsigned int amount) {

  this->_energyPoints -= amount;

  return;
}

void ScavTrap::beRepaired(unsigned int amount) {

  std::cout << "SC4V-TP <" << this->_name << "> is being repaired !"
            << std::endl;
  unsigned int newHitPointsAmout = this->_hitPoints + amount;
  if (newHitPointsAmout > this->_maxHitPoints) {
    this->_hitPoints = this->_maxHitPoints;
    this->_scavTrapSays("I'm alll JUICED up now!");
  } else {
    this->_hitPoints = newHitPointsAmout;
    this->_scavTrapSays("Sweet life juice!");
  }
  std::cout << "SC4V-TP <" << this->_name << "> health is now "
            << this->_hitPoints << " !" << std::endl;

  return;
}

std::string ScavTrap::_coloredText(std::string text, std::string const color,
                                   std::string reset) const {
  return color + text + reset;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {

  this->_challengeNewCommerCost = rhs._challengeNewCommerCost;
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
const std::string ScavTrap::red = "\033[0;31m";
const std::string ScavTrap::green = "\033[1;32m";
const std::string ScavTrap::yellow = "\033[1;33m";
const std::string ScavTrap::cyan = "\033[0;36m";
const std::string ScavTrap::magenta = "\033[0;35m";
const std::string ScavTrap::reset = "\033[0m";
