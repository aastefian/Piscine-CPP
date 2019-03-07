/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.class.cpp                                   :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 12:07:07 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.class.hpp"
#include <iostream>

// Constructor
RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {

  std::cout << "* click click click *" << std::endl;

  return;
}

// Destructor
RadScorpion::~RadScorpion(void) {

  std::cout << "* SPROTCH *" << std::endl;

  return;
}

// Member functions

// Operators
RadScorpion &RadScorpion::operator=(RadScorpion const &rhs) {

  this->setType(rhs.getType());
  this->setHP(rhs.getHP());

  return *this;
}

std::ostream &operator<<(std::ostream &o, RadScorpion const &rhs) {

  o << rhs.getType();

  return o;
};
