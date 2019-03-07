/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:12:47 by svilau            #+#    #+#             */
/*   Updated: 2018/10/09 12:51:12 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <fstream>
#include <iostream>

// Classes
#include "RobotomyRequestForm.class.hpp"

// Constructor
RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form("RobotomyRequestForm", 72, 45), _target(target) {
  // this->setSwitch(false);
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm(void) {}

// Member functions
std::string RobotomyRequestForm::getTarget(void) const { return this->_target; }

void RobotomyRequestForm::action(void) const {
  std::cout << "Drilling noises" << std::endl;
  if (rand()%2) {
    std::cout << RobotomyRequestForm::_target
              << " has been robotomized successfully" << std::endl;
    // RobotomyRequestForm::setSwitch(false);
  } else {
    std::cout << "It's a faliure" << std::endl;
    // this->setSwitch(true);
  }
}

// void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
//   this->action();
// }

// Operators
RobotomyRequestForm &RobotomyRequestForm::
operator=(RobotomyRequestForm const &rhs) {
  this->setIsSigned(rhs.getIsSigned());
  this->_target = rhs.getTarget();
  return *this;
}
