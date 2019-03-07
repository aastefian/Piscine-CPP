/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 11:00:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/12 13:57:59 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

// Personal headers
#include "easyfind.hpp"

int main() {

  std::list<int> list;
  list.push_back(12);
  list.push_back(13);
  list.push_back(15);

  try {
    std::cout << easyfind< std::list<int> >(list, 13) << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    std::cout << easyfind< std::list<int> >(list, 15) << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::vector<int> newVectorInt(30, 5);
  std::vector<float> newVectorFloat(30, 6);

  try {
    // for (std::vector<int>::const_iterator i = newVectorInt.begin(); i != newVectorInt.end(); ++i)
    // std::cout << *i << ' ';
    std::cout << easyfind<std::vector<int> >(newVectorInt, static_cast<int>(5))
              << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    std::cout << easyfind<std::vector<float> >(newVectorFloat,
                                              static_cast<int>(6))
              << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  // std::vector<std::string> newVectorString;

  // newVectorString.push_back("1");
  // newVectorString.push_back("2");
  // newVectorString.push_back("232");

  // try {
  //   std::cout << easyfind<std::vector<std::string> >(newVectorString,
  //                                             6)
  //             << std::endl;
  // } catch (std::exception &e) {
  //   std::cout << e.what() << std::endl;
  // }

  return 0;
}
