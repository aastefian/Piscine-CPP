/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 11:32:42 by svilau            #+#    #+#             */
/*   Updated: 2018/10/04 19:30:31 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <iostream>

// Classes
#include "Fixed.class.hpp"

int main(void) {
  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));
  Fixed c(2);
  Fixed const d(Fixed(6.05f) * Fixed(2));

  // Test increment
  std::cout << "----------------------------" << std::endl;
  std::cout << "| TEST INCREMENT           |" << std::endl;
  std::cout << "----------------------------" << std::endl;

  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;

  // Test decrement
  std::cout << "----------------------------" << std::endl;
  std::cout << "| TEST DECREMENT           |" << std::endl;
  std::cout << "----------------------------" << std::endl;

  std::cout << a << std::endl;
  std::cout << --a << std::endl;
  std::cout << a << std::endl;
  std::cout << a-- << std::endl;
  std::cout << a << std::endl;

  // Test comparaison
  std::cout << "----------------------------" << std::endl;
  std::cout << "| TEST COMPARISON          |" << std::endl;
  std::cout << "----------------------------" << std::endl;

  std::cout << "a: " << a << " b: " << b << " c: " << c << std::endl;
  std::cout << "a est inferieur à b: " << (a < b) << std::endl;
  std::cout << "c est inferieur à a: " << (c < a) << std::endl;

  // Test arithmetique
  std::cout << "----------------------------" << std::endl;
  std::cout << "| TEST ARITHMETIQUE        |" << std::endl;
  std::cout << "----------------------------" << std::endl;

  a = Fixed(3);
  std::cout << "a: " << a << " b: " << b << " c: " << c << std::endl;
  std::cout << "a + b: " << a + b << std::endl;
  std::cout << "a - b: " << a - b << std::endl;
  std::cout << "a * b: " << a * b << std::endl;
  std::cout << "c / a: " << c / a << std::endl;

  // Test min/max
  std::cout << "----------------" << std::endl;
  std::cout << "| TEST MIN/MAX |" << std::endl;
  std::cout << "----------------" << std::endl;

  std::cout << "a: " << a << " c: " << c << std::endl;
  std::cout << Fixed::min(a, c) << " is smaller than " << Fixed::max(a, c) << std::endl;
  std::cout << Fixed::max(a, c) << " is greater than " << Fixed::min(a, c) << std::endl << std::endl;

  std::cout << "const b: " << b << " const d: " << d << std::endl;
  std::cout << Fixed::min(b, d) << " is smaller than " << Fixed::max(b, d) << std::endl;
  std::cout << Fixed::max(b, d) << " is greater than " << Fixed::min(b, d) << std::endl;


  return 0;
}