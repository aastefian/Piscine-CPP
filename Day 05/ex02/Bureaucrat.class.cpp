/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:22:50 by svilau            #+#    #+#             */
/*   Updated: 2018/10/09 14:18:42 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <iostream>
#include <string>

// Classes
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

// Constructor
Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {

  if (grade < 1) {
    throw Bureaucrat::GradeTooHighException();
  } else if (grade > 150) {
    throw Bureaucrat::GradeTooLowException();
  } else {
    this->_grade = grade;
  }
  return;
}

// Destructor
Bureaucrat::~Bureaucrat(void) {}

// Member functions
std::string Bureaucrat::getName(void) const { return this->_name; }
int Bureaucrat::getGrade(void) const { return this->_grade; }

void Bureaucrat::incrementGrade(void) {

  if (this->_grade - 1 < 1) {
    throw GradeTooHighException();
  } else {
    this->_grade -= 1;
  }
  return;
}

void Bureaucrat::decrementGrade(void) {

  if (this->_grade + 1 > 150) {
    throw GradeTooLowException();
  } else {
    this->_grade += 1;
  }
  return;
}

void Bureaucrat::signForm(Form &form) const {
  try {
    form.beSigned(*this);
    std::cout << this->getName() << (std::string) " signs " << form.getName()
              << std::endl;
  } catch (std::exception &e) {
    std::cout << this->getName() << (std::string) " cannot sign "
              << form.getName() << (std::string) " because "
              << (std::string)e.what() << std::endl;
  }
}

void Bureaucrat::executeForm(Form const &form) {
  try {
    std::cout << this->getName() << (std::string) " executes " << form.getName()
              << std::endl;
    form.execute(*this);
  } catch (std::exception &e) {
    std::cout << this->getName() << (std::string) " cannot execute "
              << form.getName() << (std::string) " because "
              << (std::string)e.what() << std::endl;
  }
}

// Exceptions
const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "Bureaucrat: The grade is too high !\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "Bureaucrat: The grade is too low !\n";
}

// Operators
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {

  // this->_name = (std::string const)(rhs.getName());
  this->_grade = rhs.getGrade();

  return *this;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) {

  o << rhs.getName() << (std::string) ", bureaucrat grade "
    << std::to_string(rhs.getGrade()) << std::endl;

  return o;
};
