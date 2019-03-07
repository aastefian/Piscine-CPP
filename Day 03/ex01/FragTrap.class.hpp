/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 15:41:03 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_CLASS_H
#define FRAG_TRAP_CLASS_H

// Libraries
#include <string>

class FragTrap {

public:
  FragTrap(void);
  FragTrap(std::string name);
  FragTrap(FragTrap const &src);
  ~FragTrap(void);

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
  void minionTrap(std::string const &target);
  void freezingAttack(std::string const &target);
  void throwingGrenade(std::string const &target);
  void lazerAttack(std::string const &target);
  void lavaRainAttack(std::string const &target);
  void takeDamage(unsigned int amount);
  void takeEnergyPoints(unsigned int amount);
  void beRepaired(unsigned int amount);
  void vaulthunter_dot_exe(std::string const &target);
  std::string randomDialog(std::string pool) const;

  // Operators
  FragTrap &operator=(FragTrap const &rhs);

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
  unsigned int _lazerAttackDamage;
  unsigned int _lavaRainAttackDamage;
  unsigned int _throwingGrenadeDamage;
  unsigned int _armorDamageReduction;
  unsigned int _vaulthunterDotExeCost;

  // Methods
  void _fragTrapSays(std::string);
  std::string _coloredText(std::string text, std::string const color,
                           std::string reset) const;
};

#endif
