/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:36:49 by svilau            #+#    #+#             */
/*   Updated: 2018/10/09 14:21:10 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <iostream>

// Classes
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"

int main() {

  Bureaucrat newBureaucrat = Bureaucrat("Bob", 1);
  ShrubberyCreationForm newShrubberyCreationForm =
      ShrubberyCreationForm("home");
  RobotomyRequestForm newRobotomyRequestForm =
      RobotomyRequestForm("manInBlack");
  PresidentialPardonForm newPresidentialPardonForm =
      PresidentialPardonForm("manInBlack");

  try {
    std::cout << "1. Action of ShrubberyCreationForm (creates a file)" << std::endl;
    newShrubberyCreationForm.action();

    std::cout
        << "\n2. Action of RobotomyRequestForm (50% Chances of robotomizing)"
        << std::endl;
    newRobotomyRequestForm.action();

    std::cout << "\n3. Action of PresidentialPardonForm" << std::endl;
    newPresidentialPardonForm.action();

  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    std::cout << "\n4. Execute non signed form test" << std::endl;
    newPresidentialPardonForm.execute(newBureaucrat);

  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    std::cout << "\n5. Execute signed form test" << std::endl;
    newPresidentialPardonForm.beSigned(newBureaucrat);
    std::cout << newBureaucrat << std::endl;
    std::cout << newPresidentialPardonForm << std::endl;
    newPresidentialPardonForm.execute(newBureaucrat);

  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    std::cout << "\n6. Execute form from bureaucrat" << std::endl;
    newBureaucrat.executeForm(newPresidentialPardonForm);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    std::cout << "\n7. Execute form from bureaucrat which has not the right to execute" << std::endl;
    newBureaucrat = Bureaucrat("CLone of Bob", 150);
    newBureaucrat.executeForm(newPresidentialPardonForm);

  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}
