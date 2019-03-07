/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                   :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 12:18:01 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_H
#define CHARACTER_CLASS_H

// Libraries
#include <string>

// Classes
#include "AWeapon.class.hpp"
#include "Enemy.class.hpp"

class Character {

public:
  Character(void);
  Character(std::string const &name);
  Character(Character const &src);
  virtual ~Character(void);

  // Attributes

  // Member functions
  void recoverAP(void);
  void equip(AWeapon *);
  void attack(Enemy *);

  std::string getName(void) const; // DOUBT for virtual
  void setName(std::string const); // DOUBT for virtual

  unsigned int getAP(void) const;
  void takeAP(unsigned int amount);

  AWeapon *getCurrentWeapon(void) const;

  // Operators
  Character &operator=(Character const &);

protected:
  // Attributes

  // Member functions

private:
  // Attributes
  std::string _name;
  unsigned int _ap;
  unsigned int _maxAp;
  AWeapon *_currentWeapon;


  // Member functions
};

// Operators
std::ostream &operator<<(std::ostream &o, Character const &rhs);

#endif
