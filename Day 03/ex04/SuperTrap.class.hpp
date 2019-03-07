/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.class.hpp                                 :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 15:24:44 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_CLASS_H
#define SUPER_TRAP_CLASS_H

// Libraries
#include <string>

// Classes
#include "FragTrap.class.hpp"
#include "NinjaTrap.class.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:
  SuperTrap(void);
  SuperTrap(std::string name);
  SuperTrap(SuperTrap const &src);
  ~SuperTrap(void);

  // Methods
  void headhunterChallenge(ClapTrap const &target);
  void luckyShotChallenge(ClapTrap const &target);
  void relentlessChallenge(ClapTrap const &target);
  void actionHeroChallenge(ClapTrap const &target);
  void seasonedKillerChallenge(ClapTrap const &target);

  // Operators
  SuperTrap &operator=(SuperTrap const &rhs);

protected:
  // Attributes
  std::string _name;
  unsigned int _hitPoints;
  unsigned int _maxHitPoints;
  unsigned int _energyPoints;
  unsigned int _maxEnergyPoints;
  unsigned int _level;
  unsigned int _meleeAttackDamage;
  unsigned int _rangedAttackDamage;
  unsigned int _armorDamageReduction;

private:
  // Attributes
  unsigned int _ninjaShoeboxCost;

  // Methods
  void _ClapTrapSays(std::string);
};

// SuperTrap::SuperTrap(std::string name) : FragTrap(name) { };
// SuperTrap::SuperTrap(std::string name) : NinjaTrap(name) { };

#endif
