/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 10:15:04 by svilau            #+#    #+#             */
/*   Updated: 2018/10/09 11:03:11 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_CLASS_H
#define ROBOTOMY_REQUEST_FORM_CLASS_H

// Libraries
#include <string>

// Classes
#include "Form.class.hpp"

class RobotomyRequestForm : public Form {
public:
  RobotomyRequestForm(void);
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(RobotomyRequestForm const &);
  ~RobotomyRequestForm(void);

  // Attributes
  static bool switchChance;

  // Member functions
  std::string getTarget(void) const;
  bool getSwitch(void) const;

  void setSwitch(bool);

  // void execute(Bureaucrat const &executor) const;
  void action(void) const;

  // Operators
  RobotomyRequestForm &operator=(RobotomyRequestForm const &);

protected:
  // Attributes

  // Member functions

private:
  // Attributes
  std::string _target;
  bool _switchChance;

  // Member functions
};

#endif
