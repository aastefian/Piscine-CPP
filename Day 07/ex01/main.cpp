/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:38:55 by svilau            #+#    #+#             */
/*   Updated: 2018/10/11 15:05:14 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <limits>

template <typename T> T const &min(T const &a, T const &b) {
  std::cout << "Called function min with params: " << a << " ," << b << std::endl;
  return a < b ? a : b;
}

template <typename T, typename U, typename V>
void iter(T &adress, U length, V &function) {
  for (unsigned int i = 0; i < length; i++) {
    function(adress[i], adress[i]);
  }
}

int main(void) {

  char chars[10] = "bcdefghij";
  int ints[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  float floats[10] = {1.01f, 2.01f, 3.01f, 4.01f, 5.01f, 6.01f, 7.01f, 8.01f, 9.01f, 10.01f};
  double doubles[10] = {1.01f, 2.01f, 3.01f, 4.01f, 5.01f, 6.01f, 7.01f, 8.01f, 9.01f, 10.01f};

  std::cout << "Test function chars array" << std::endl;
  iter(chars, strlen(chars), min<char>);
  std::cout << std::endl;

  std::cout << "Test function floats array" << std::endl;
  iter(ints, sizeof(ints) / sizeof(ints[0]), min<int>);
  std::cout << std::endl;

  std::cout << "Test function floats array" << std::endl;
  iter(floats, sizeof(floats) / sizeof(floats[0]), min<float>);
  std::cout << std::endl;

  std::cout << "Test function doubles array" << std::endl;
  iter(doubles, sizeof(doubles) / sizeof(doubles[0]), min<float>);
  std::cout << std::endl;

  return 0;
}
