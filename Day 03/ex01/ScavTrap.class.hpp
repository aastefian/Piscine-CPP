/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 18:08:21 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_CLASS_H
#define SCAV_TRAP_CLASS_H

// Libraries
#include <string>

class ScavTrap {

public:
  ScavTrap(void);
  ScavTrap(std::string name);
  ScavTrap(ScavTrap const &src);
  ~ScavTrap(void);

  // Attributes
  static const std::string red;
  static const std::string green;
  static const std::string yellow;
  static const std::string cyan;
  static const std::string magenta;
  static const std::string reset;

  // Methods
  void meleeAttack(std::string const &target);
  void rangedAttack(std::string const &target);
  void headhunterChallenge(void);
  void luckyShotChallenge(void);
  void relentlessChallenge(void);
  void actionHeroChallenge(void);
  void seasonedKillerChallenge(void);
  void takeDamage(unsigned int amount);
  void takeEnergyPoints(unsigned int amount);
  void beRepaired(unsigned int amount);
  void challengeNewComer(std::string const &target);


  // Operators
  ScavTrap &operator=(ScavTrap const &rhs);

private:
  // Attributes
  std::string _name;
  unsigned int _hitPoints;
  unsigned int _maxHitPoints;
  unsigned int _energyPoints;
  unsigned int _maxEnergyPoints;
  unsigned int _level;
  unsigned int _meleeAttackDamage;
  unsigned int _rangedAttackDamage;
  unsigned int _minionTrapDamage;
  unsigned int _freezingAttackDamage;
  unsigned int _throwingGrenadeDamage;
  unsigned int _armorDamageReduction;
  unsigned int _challengeNewCommerCost;

  // Methods
  void _scavTrapSays(std::string);
  std::string _coloredText(std::string text, std::string const color,
                           std::string reset) const;
};

#endif
