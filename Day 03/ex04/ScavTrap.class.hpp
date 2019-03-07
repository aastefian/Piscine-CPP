/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 17:23:50 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_CLASS_H
#define SCAV_TRAP_CLASS_H

// Libraries
#include <string>

// Classes
#include "ClapTrap.class.hpp"

class ScavTrap : public virtual ClapTrap {

public:
  ScavTrap(void);
  ScavTrap(std::string name);
  ScavTrap(ScavTrap const &src);
  ~ScavTrap(void);

  // Methods
  void headhunterChallenge(void);
  void luckyShotChallenge(void);
  void relentlessChallenge(void);
  void actionHeroChallenge(void);
  void seasonedKillerChallenge(void);
  void challengeNewComer(std::string const &target);

  // Operators
  ScavTrap &operator=(ScavTrap const &rhs);

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
  unsigned int _challengeNewCommerCost;

  // Methods
  void _ClapTrapSays(std::string);
};

#endif
