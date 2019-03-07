/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:36:49 by svilau            #+#    #+#             */
/*   Updated: 2018/10/09 14:26:59 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <iostream>

// Classes
#include "Bureaucrat.class.hpp"

int main() {

  Bureaucrat newBureaucrat = Bureaucrat("Bob", 150);

  try {
    std::cout << newBureaucrat << std::endl;
    std::cout << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what();
  }

  try {
    // Throw too low
    newBureaucrat.decrementGrade();
    std::cout << std::endl;

  } catch (std::exception &e) {
    std::cout << e.what();
  }

  try {
    // Throw too high
    newBureaucrat = Bureaucrat("Tom", 1);
    newBureaucrat.incrementGrade();
    std::cout << std::endl;

  } catch (std::exception &e) {
    std::cout << e.what();
  }

  try {
    // Throw Constructor
    newBureaucrat = Bureaucrat("Tom", 0);
    newBureaucrat = Bureaucrat("Tom", 151);
    std::cout << std::endl;

  } catch (std::exception &e) {
    std::cout << e.what();
  }

  return 0;
}
