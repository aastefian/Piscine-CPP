/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/05 14:00:12 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_CLASS_H
#define CLAP_TRAP_CLASS_H

// Libraries
#include <string>

class ClapTrap {

public:
  ClapTrap(void);
  ClapTrap(std::string name);
  ClapTrap(ClapTrap const &src);
  ~ClapTrap(void);

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
  void takeDamage(unsigned int amount);
  void takeEnergyPoints(unsigned int amount);
  void beRepaired(unsigned int amount);


  // Operators
  ClapTrap &operator=(ClapTrap const &rhs);

protected:
  // Attributes
  std::string _name;
  std::string _type;
  unsigned int _hitPoints;
  unsigned int _maxHitPoints;
  unsigned int _energyPoints;
  unsigned int _maxEnergyPoints;
  unsigned int _level;
  unsigned int _meleeAttackDamage;
  unsigned int _rangedAttackDamage;
  unsigned int _armorDamageReduction;

  // Methods
  void _ClapTrapSays(std::string);
  std::string _coloredText(std::string text, std::string const color,
                           std::string reset) const;

private:
  // Attributes

  // Methods
};

#endif
