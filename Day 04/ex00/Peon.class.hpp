/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 11:36:21 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_CLASS_H
#define PEON_CLASS_H

// Libraries
#include <string>

// Classes
#include "Victim.class.hpp"

class Peon : public Victim {

public:
  Peon(void);
  Peon(std::string name);
  Peon(Peon const &src);
  ~Peon(void);

  // Attributes

  // Member functions
  std::string introduceYourself(void) const;
  void getPolymorphed(void) const;

  // Operators
  Peon &operator=(Peon const &);

protected:
  // Attributes

  // Member functions

private:
  // Attributes

  // Member functions
};

// Operators
std::ostream &operator<<(std::ostream &o, Peon const &rhs);

#endif
