/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/06 14:08:54 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_CLASS_H
#define VICTIM_CLASS_H

// Libraries
#include <string>

// Classes

class Victim {

public:
  Victim(void);
  Victim(std::string name);
  Victim(Victim const &src);
  ~Victim(void);

  // Attributes

  // Member functions
  virtual std::string introduceYourself(void) const;
  virtual void getPolymorphed(void) const;
  virtual std::string getName(void) const;

  // Operators
  Victim &operator=(Victim const &);

protected:
  // Attributes

  // Member functions

private:
  // Attributes
  std::string _name;

  // Member functions
};

// Operators
std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif
