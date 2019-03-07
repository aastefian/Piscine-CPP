/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 18:08:55 by svilau           ###   ########.fr       */
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
  this->_ClapTrapSays("Recompiling my combat code!");
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
  this->_ClapTrapSays("Look out everybody! Things are about to get awesome!");
  std::cout << std::endl;

  return;
}

ScavTrap::~ScavTrap(void) {
  std::cout << std::endl << "ScavTrap has been destroyed" << std::endl;
  return;
}

void ScavTrap::headhunterChallenge(void) {

  this->_ClapTrapSays("You gotta kill 50 human enemies");

  return;
}

void ScavTrap::luckyShotChallenge(void) {

  this->_ClapTrapSays("You gotta kill 100 enemies with Critical Hits");

  return;
}

void ScavTrap::relentlessChallenge(void) {

  this->_ClapTrapSays("You gotta kill 5 enemies in succession with no more "
                      "than 7 seconds in between each kill");

  return;
}

void ScavTrap::actionHeroChallenge(void) {

  this->_ClapTrapSays("You gotta kill 50 enemies using your Action Skill");

  return;
}

void ScavTrap::seasonedKillerChallenge(void) {

  this->_ClapTrapSays("You gotta kill 500 enemies");

  return;
}

void ScavTrap::challengeNewComer(std::string const &target) {

  int const totalChallenges = 5;
  std::string challengesNamePool[totalChallenges] = {
      "headhunter", "luckyShot", "relentless", "actionHero", "seasonedKiller"};
  typedef void (ScavTrap::*Challenges)(void);
  Challenges challengesPointerPool[totalChallenges] = {
      &ScavTrap::headhunterChallenge, &ScavTrap::luckyShotChallenge,
      &ScavTrap::relentlessChallenge, &ScavTrap::actionHeroChallenge,
      &ScavTrap::seasonedKillerChallenge};

  if (this->_energyPoints >= this->_challengeNewCommerCost) {
    int randomNumber = rand() % totalChallenges;

    std::cout << " <" << this->_name << "> challenges <" << target << "> to "
              << challengesNamePool[randomNumber] << " challenge !"
              << std::endl;

    (this->*(challengesPointerPool[randomNumber]))();
    this->takeEnergyPoints(this->_challengeNewCommerCost);
  } else {
    this->_ClapTrapSays("No more juice pal!");
  }

  return;
}

void ScavTrap::_ClapTrapSays(std::string message) {

  std::cout << " "
            << this->_coloredText(this->_name, ClapTrap::green, ClapTrap::reset)
            << ": " << message << std::endl;

  return;
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
