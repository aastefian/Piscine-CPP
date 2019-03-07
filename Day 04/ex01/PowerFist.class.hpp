/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.class.hpp                                   :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 12:18:01 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIST_CLASS_H
#define POWER_FIST_CLASS_H

// Libraries
#include <string>

// Classes
#include "AWeapon.class.hpp"

class PowerFist : public AWeapon {

public:
  PowerFist(void);
  PowerFist(PowerFist const &src);
  virtual ~PowerFist(void);

  // Attributes

  // Member functions
  void attack(void) const;

  // Operators
  PowerFist &operator=(PowerFist const &);

protected:
  // Attributes

  // Member functions

private:
  // Attributes

  // Member functions
};

// Operators
std::ostream &operator<<(std::ostream &o, PowerFist const &rhs);

#endif
