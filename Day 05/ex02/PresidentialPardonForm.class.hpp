/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 10:15:04 by svilau            #+#    #+#             */
/*   Updated: 2018/10/09 11:03:11 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_CLASS_H
#define PRESIDENTIAL_PARDON_CLASS_H

// Libraries
#include <string>

// Classes
#include "Form.class.hpp"

class PresidentialPardonForm : public Form {
public:
  PresidentialPardonForm(void);
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(PresidentialPardonForm const &);
  ~PresidentialPardonForm(void);

  // Attributes

  // Member functions
  std::string getTarget(void) const;

  // void execute(Bureaucrat const & executor) const;
  void action(void) const;

  // Operators
  PresidentialPardonForm &operator=(PresidentialPardonForm const &);

protected:
  // Attributes

  // Member functions

private:
  // Attributes
  std::string _target;

  // Member functions
};

#endif
