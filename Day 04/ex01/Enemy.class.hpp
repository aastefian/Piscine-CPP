/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                   :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 12:18:01 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_H
#define ENEMY_CLASS_H

// Libraries
#include <string>

// Classes

class Enemy {

public:
  Enemy(void);
  Enemy(int hp, std::string const &type);
  Enemy(Enemy const &src);
  virtual ~Enemy(void);

  // Attributes

  // Member functions
  std::string getType(void) const; // DOUBT for virtual
  void setType(std::string const); // DOUBT for virtual

  unsigned int getHP(void) const;
  void setHP(unsigned int const);

  virtual void takeDamage(unsigned int);

  // Operators
  Enemy &operator=(Enemy const &);

protected:
  // Attributes

  // Member functions

private:
  // Attributes
  unsigned int _hp;
  std::string _type;

  // Member functions
};

// Operators
std::ostream &operator<<(std::ostream &o, Enemy const &rhs);

#endif
