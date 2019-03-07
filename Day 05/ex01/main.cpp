/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:36:49 by svilau            #+#    #+#             */
/*   Updated: 2018/10/09 10:13:27 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <iostream>

// Classes
#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"

int main() {

  Form newForm = Form("Form n.23D", 1, 1);
  Bureaucrat newBureaucrat = Bureaucrat("Bob", 149);

  // Throw too low constructor
  try {
    std::cout << "1. Throw too high constructor" << std::endl;
    Form newForm = Form("Form n.23D", 0, 1);
  } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
  }


  // Thow too high constructor
  try {
    std::cout << "2. Thow too low constructor" << std::endl;
    Form newForm = Form("Form n.23D", 1, 151);
  } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
  }

  // Throw sign form not high enough grade
  try {
    std::cout << "3. Throw signForm() not high enough grade" << std::endl;
    newBureaucrat.signForm(newForm);
  } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
  }

  // Throw be signed not enough grade
  try {
    std::cout << "4. Throw beSigned() not enough grade" << std::endl;
    newForm.beSigned(newBureaucrat);
  } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
  }

  return 0;
}
