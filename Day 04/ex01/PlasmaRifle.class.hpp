/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.class.hpp                                   :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 12:18:01 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_CLASS_H
#define PLASMA_RIFLE_CLASS_H

// Libraries
#include <string>

// Classes
#include "AWeapon.class.hpp"

class PlasmaRifle : public AWeapon {

public:
  PlasmaRifle(void);
  PlasmaRifle(PlasmaRifle const &src);
  virtual ~PlasmaRifle(void);

  // Attributes

  // Member functions
  void attack(void) const;

  // Operators
  PlasmaRifle &operator=(PlasmaRifle const &);

protected:
  // Attributes

  // Member functions

private:
  // Attributes

  // Member functions
};

// Operators
std::ostream &operator<<(std::ostream &o, PlasmaRifle const &rhs);

#endif
