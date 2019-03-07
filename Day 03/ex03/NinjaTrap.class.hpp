/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.hpp                                 :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 15:24:44 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_CLASS_H
#define NINJA_TRAP_CLASS_H

// Libraries
#include <string>

// Classes
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

class NinjaTrap : public ClapTrap {

public:
  NinjaTrap(void);
  NinjaTrap(std::string name);
  NinjaTrap(NinjaTrap const &src);
  ~NinjaTrap(void);

  // Methods
  void headhunterChallenge(ClapTrap const &target);
  void luckyShotChallenge(ClapTrap const &target);
  void relentlessChallenge(ClapTrap const &target);
  void actionHeroChallenge(ClapTrap const &target);
  void seasonedKillerChallenge(ClapTrap const &target);
  void ninjaShoebox(ClapTrap const &target);
  void ninjaShoebox(NinjaTrap const &target);
  void ninjaShoebox(FragTrap const &target);
  void ninjaShoebox(ScavTrap const &target);

  // Operators
  NinjaTrap &operator=(NinjaTrap const &rhs);

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

#endif
