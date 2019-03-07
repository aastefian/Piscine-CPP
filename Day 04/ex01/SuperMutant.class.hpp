/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.class.hpp                                   :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 12:18:01 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_CLASS_H
#define SUPER_MUTANT_CLASS_H

// Libraries
#include <string>

// Classes
#include "Enemy.class.hpp"

class SuperMutant : public Enemy {

public:
  SuperMutant(void);
  SuperMutant(SuperMutant const &src);
  virtual ~SuperMutant(void);

  // Attributes

  // Member functions
  virtual void takeDamage(unsigned int);

  // Operators
  SuperMutant &operator=(SuperMutant const &);

protected:
  // Attributes

  // Member functions

private:
  // Attributes

  // Member functions
};

// Operators
std::ostream &operator<<(std::ostream &o, SuperMutant const &rhs);

#endif
