/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                   :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 12:07:07 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.class.hpp"
#include <iostream>

// Constructor
Enemy::Enemy(int hp, std::string const &type)
    : _hp(hp), _type(type) {

  return;
}

// Destructor
Enemy::~Enemy(void) { return; }

// Member functions
std::string Enemy::getType(void) const { return this->_type; }
void Enemy::setType(std::string const type) {

  this->_type = type;

  return;
}

unsigned int Enemy::getHP(void) const { return this->_hp; }
void Enemy::setHP(unsigned int const hp) {
  this->_hp = hp;
  return;
}

void Enemy::takeDamage(unsigned int amount) {
// (void)amount;
if(this->_hp >= amount)
  this->setHP(this->_hp - amount);
  else
  this->_hp = 0;
  // int newHP = (int)this->_hp - amount;
  // if (newHP < 0) {
  //   this->_hp = 0;
  // } else {
  //   this->_hp = newHP;
  // }

  return;
}

// Operators
Enemy &Enemy::operator=(Enemy const &rhs) {

  this->_type = rhs._type;
  this->_hp = rhs._hp;

  // this->setType(rhs.getType());
  // this->setHP(rhs.getHP());

  return *this;
}

std::ostream &operator<<(std::ostream &o, Enemy const &rhs) {

  o << rhs.getType();

  return o;
};
