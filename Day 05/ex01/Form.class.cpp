/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:22:50 by svilau            #+#    #+#             */
/*   Updated: 2018/10/09 10:37:38 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <iostream>

// Classes
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

// Constructor
Form::Form(std::string const name, int const signRequiredGrade,
           int const executeRequiredGrade)
    : _name(name), _signRequiredGrade(signRequiredGrade),
      _executeRequiredGrade(executeRequiredGrade), _isSigned(false) {

  if (this->_signRequiredGrade < 1) {
    throw Form::GradeTooHighException();
  } else if (this->_signRequiredGrade > 150) {
    throw Form::GradeTooLowException();
  }
  if (this->_executeRequiredGrade < 1) {
    throw Form::GradeTooHighException();
  } else if (this->_executeRequiredGrade > 150) {
    throw Form::GradeTooLowException();
  }
  return;
}

// Destructor
Form::~Form(void) {}

// Member functions
std::string Form::getName() const { return this->_name; }
int Form::getSigneRequiredGrade() const { return this->_signRequiredGrade; }
int Form::getExecuteRequiredGrade(void) const {
  return this->_executeRequiredGrade;
}
int Form::Form::getIsSigned(void) const { return this->_isSigned; }
void Form::beSigned(Bureaucrat const &bureaucrat) {
  if (bureaucrat.getGrade() <= this->_signRequiredGrade) {
    this->_isSigned = true;
  } else {
    throw GradeTooLowException();
  }
}

void Form::setIsSigned(bool const isSigned) {
  this->_isSigned = isSigned;
}

// Exceptions
const char *Form::GradeTooHighException::what() const throw() {
  return "Form: Grade is too high !\n";
}

const char *Form::GradeTooLowException::what() const throw() {
  return "Form: Grade is too low !\n";
}

// Operators
Form &Form::operator=(Form const &rhs) {
  this->_isSigned = rhs.getIsSigned();
  return *this;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs) {

  o << rhs.getName() << (std::string) ", grade required to sign "
    << std::to_string(rhs.getSigneRequiredGrade())
    << (std::string) ", grade required to execute "
    << std::to_string(rhs.getExecuteRequiredGrade()) << std::endl;

  return o;
};
