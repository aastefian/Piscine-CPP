/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.class.hpp                                   :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 12:18:01 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_WEAPON_CLASS_H
#define A_WEAPON_CLASS_H

// Libraries
#include <string>

// Classes

class AWeapon {

public:
  AWeapon(void);
  AWeapon(std::string const &name, int apcost, int damage);
  AWeapon(AWeapon const &src);
  virtual ~AWeapon(void);

  // Attributes

  // Member functions
  std::string getName() const;
  void setName(std::string const);

  unsigned int getAPCost() const;
  void setAPCost(unsigned int const apcost);

  unsigned int getDamage() const;
  void setDamage(unsigned int const damage);

  virtual void attack() const = 0;

  // Operators
  AWeapon &operator=(AWeapon const &);

protected:
  // Attributes

  // Member functions

private:
  // Attributes
  std::string _name;
  unsigned int _apcost;
  unsigned int _damage;

  // Member functions
};

// Operators
std::ostream &operator<<(std::ostream &o, AWeapon const &rhs);

#endif
