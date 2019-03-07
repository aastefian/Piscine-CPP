/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:38:55 by svilau            #+#    #+#             */
/*   Updated: 2018/10/11 14:41:43 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <limits>

template <typename T> T const &min(T const &a, T const &b) {
  return a < b ? a : b;
}

template <typename T> T const &max(T const &a, T const &b) {
  return a > b ? a : b;
}

template <typename T> void swap(T &a, T &b) {
  T tmp = a;
  a = b;
  b = tmp;
}

int main(void) {

  int a = 10;
  int b = 5;

  int ret = min<int>(a, b);
  std::cout << "Min test: min( " << a << ", " << b << ") -> " << ret
            << std::endl;
  ret = max<int>(a, b);
  std::cout << "Max test: max( " << a << ", " << b << ") -> " << ret
            << std::endl;

  std::cout << "Swap test: a: " << a << " b: " << b << " swap( " << a << ", "
            << b << ") -> ";
  swap<int>(a, b);
  std::cout << "a = " << a << " b = " << b << std::endl;

  std::cout << std::endl << "Tests sujet" << std::endl;
  a = 2;
  b = 3;
  ::swap(a, b);
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
  std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
  std::string c = "chaine1";
  std::string d = "chaine2";
  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
  std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

  return 0;
}
