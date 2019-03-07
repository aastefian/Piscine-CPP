/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.cpp                      :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:12:47 by svilau            #+#    #+#             */
/*   Updated: 2018/10/09 11:31:06 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <fstream>
#include <iostream>

// Classes
#include "PresidentialPardonForm.class.hpp"

// Constructor
PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form("PresidentialPardonForm", 25, 5), _target(target) {
  return;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm(void) {}

// Member functions
std::string PresidentialPardonForm::getTarget(void) const {
  return this->_target;
}

void PresidentialPardonForm::action(void) const {
  std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox"
            << std::endl;
}

// void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
//     this->action();
// }

// Operators
PresidentialPardonForm &PresidentialPardonForm::
operator=(PresidentialPardonForm const &rhs) {
  this->setIsSigned(rhs.getIsSigned());
  this->_target = rhs.getTarget();
  return *this;
}
