/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 16:19:08 by svilau            #+#    #+#             */
/*   Updated: 2018/10/12 17:17:31 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <iostream>

// Classes
#include "Span.class.hpp"

int main(void) {

  Span newSpan(4 );

  // Test add N numbers
  try {
    newSpan.addNumber(78);
    newSpan.addNumber(89);
    newSpan.addNumber(25);
    newSpan.addNumber(6);

    // newSpan.addNumber(100);
    // newSpan.addNumber(46);
    // newSpan.addNumber(7);
    // newSpan.addNumber(8);
    // newSpan.addNumber(9);
    // newSpan.addNumber(10);
  } catch (std::exception &e) {
    std::cout << "Exception: " << e.what() << std::endl;
  }

  try {
    std::cout << "Shortest span: " << newSpan.shortestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << "Exception: " << e.what() << std::endl;
  }

  try {
    std::cout << "Longest span: " << newSpan.longestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << "Exception: " << e.what() << std::endl;
  }

  // Test depasement limite N ints
  try {
    newSpan.addNumber(2);
  } catch (std::exception &e) {
    std::cout << "Exception: " << e.what() << std::endl;
  }

  return 0;
}
