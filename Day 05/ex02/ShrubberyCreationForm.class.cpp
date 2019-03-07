/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 10:28:23 by svilau            #+#    #+#             */
/*   Updated: 2018/10/09 12:09:44 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <fstream>
#include <iostream>

// Classes
#include "ShrubberyCreationForm.class.hpp"

// Constructor
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form("ShrubberyCreationForm", 145, 137), _target(target) {
  return;
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

// Member functions
std::string ShrubberyCreationForm::getTarget(void) const {
  return this->_target;
}

void ShrubberyCreationForm::action(void) const {
  std::ofstream outputFile(this->_target + "__shrubbery");

  if (outputFile.is_open()) {
    outputFile << "    ###\n"
                  "   #o###\n"
                  " #####o###\n"
                  "#o#|#|#/|##\n"
                  " ###|||#o#\n"
                  "  # }|{  #\n"
                  "    }|{\n"
                  "    ###\n"
                  "   #o###\n"
                  " #####o###\n"
                  "#o#|#|#/|##\n"
                  " ###|||#o#\n"
                  "  # }|{  #\n"
                  "    }|{\n"
                  "    ###\n"
                  "   #o###\n"
                  " #####o###\n"
                  "#o#|#|#/|##\n"
                  " ###|||#o#\n"
                  "  # }|{  #\n"
                  "    }|{\n"
                  "    ###\n"
                  "   #o###\n"
                  " #####o###\n"
                  "#o#|#|#/|##\n"
                  " ###|||#o#\n"
                  "  # }|{  #\n"
                  "    }|{\n";
  }
}

// void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
//     this->action();
// }

// Operators
ShrubberyCreationForm &ShrubberyCreationForm::
operator=(ShrubberyCreationForm const &rhs) {
  this->setIsSigned(rhs.getIsSigned());
  this->_target = rhs.getTarget();
  return *this;
}
