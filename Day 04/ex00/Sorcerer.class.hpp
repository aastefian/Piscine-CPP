/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 13:52:29 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_CLASS_H
#define SORCERER_CLASS_H

// Libraries
#include <string>

// Classes
#include "Victim.class.hpp"

class Sorcerer {

public:
  Sorcerer(void);
  Sorcerer(std::string name, std::string title);
  Sorcerer(Sorcerer const &src);
  ~Sorcerer(void);

  // Attributes

  // Member functions
  std::string introduceYourself(void) const;
  void polymorph(Victim const &) const;

  // Operators
  Sorcerer &operator=(Sorcerer const &);

protected:
  // Attributes

  // Member functions

private:
  // Attributes
  std::string _name;
  std::string _title;

  // Member functions
};

// Operators
std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
