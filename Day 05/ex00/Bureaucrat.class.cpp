/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:22:50 by svilau            #+#    #+#             */
/*   Updated: 2018/10/08 18:12:42 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <iostream>

// Classes
#include "Bureaucrat.class.hpp"

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

// Exceptions
const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "The grade is too high !\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "The grade is too low !\n";
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
