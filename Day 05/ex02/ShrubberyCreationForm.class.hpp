/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 10:15:04 by svilau            #+#    #+#             */
/*   Updated: 2018/10/09 12:09:39 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_CLASS_H
#define SHRUBBERY_CREATION_FORM_CLASS_H

// Libraries
#include <string>

// Classes
#include "Form.class.hpp"

class ShrubberyCreationForm : public Form {
public:
  ShrubberyCreationForm(void);
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(ShrubberyCreationForm const &);
  ~ShrubberyCreationForm(void);

  // Attributes

  // Member functions
  std::string getTarget(void) const;

//   void execute(Bureaucrat const &executor) const;
  void action(void) const;

  // Operators
  ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);

protected:
  // Attributes

  // Member functions

private:
  // Attributes
  std::string _target;

  // Member functions
};

#endif
