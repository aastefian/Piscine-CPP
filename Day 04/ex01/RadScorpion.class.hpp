/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.class.hpp                                   :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 12:18:01 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_CLASS_H
#define RAD_SCORPION_CLASS_H

// Libraries
#include <string>

// Classes
#include "Enemy.class.hpp"

class RadScorpion : public Enemy {

public:
  RadScorpion(void);
  RadScorpion(RadScorpion const &src);
  virtual ~RadScorpion(void);

  // Attributes

  // Member functions

  // Operators
  RadScorpion &operator=(RadScorpion const &);

protected:
  // Attributes

  // Member functions

private:
  // Attributes

  // Member functions
};

// Operators
std::ostream &operator<<(std::ostream &o, RadScorpion const &rhs);

#endif
