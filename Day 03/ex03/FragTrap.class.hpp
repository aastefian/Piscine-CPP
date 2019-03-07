/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 18:04:08 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_CLASS_H
#define FRAG_TRAP_CLASS_H

// Libraries
#include <string>

// Classes
#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap {

public:
  FragTrap(void);
  FragTrap(std::string name);
  FragTrap(FragTrap const &src);
  ~FragTrap(void);

  // Methods
  void minionTrap(std::string const &target);
  void freezingAttack(std::string const &target);
  void throwingGrenade(std::string const &target);
  void lazerAttack(std::string const &target);
  void lavaRainAttack(std::string const &target);
  void vaulthunter_dot_exe(std::string const &target);

  // Operators
  FragTrap &operator=(FragTrap const &rhs);

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
  unsigned int _minionTrapDamage;
  unsigned int _freezingAttackDamage;
  unsigned int _throwingGrenadeDamage;
  unsigned int _lazerAttackDamage;
  unsigned int _lavaRainAttackDamage;
  unsigned int _vaulthunterDotExeCost;

  // Methods
  void _ClapTrapSays(std::string);
};

#endif
