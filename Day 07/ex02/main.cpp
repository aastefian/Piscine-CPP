/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 16:19:08 by svilau            #+#    #+#             */
/*   Updated: 2018/10/11 18:06:18 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <iostream>

// Classes
#include "Array.class.hpp"

int main(void) {

  Array<int> intVoidArray = Array<int>();
  Array<int> intArray = Array<int>(3);

  Array<unsigned int> unsignedIntArray = Array<unsigned int>(3);

  //
  std::cout << "Print three types of arrays test:" << std::endl;
  intVoidArray.printArray();
  intArray.printArray();
  unsignedIntArray.printArray();
  //

  std::cout << std::endl;

  //
  std::cout << "Operator '=' test:" << std::endl;
  std::cout << "Void array: ";
  intVoidArray.printArray();
  std::cout << "Int array: ";
  intArray.printArray();

  intVoidArray = intArray;
  std::cout << "Assignated array (voidArray = intArray): ";
  intVoidArray.printArray();

  std::cout << "Modified array (voidArray[0] = 5): ";
  intVoidArray[0] = 5;
  intVoidArray.printArray();

  std::cout << "Original array ( intArray has to remain same after we done "
               "voidArray[0] = 5): ";
  intArray.printArray();
  std::cout << std::endl;
  //

  std::cout << std::endl;

  //
  std::cout << "Operator '=' on a copy constructed class test:" << std::endl;
  intArray[1] = 6;
  Array<int> copyIntArray = Array<int>(intArray);
  Array<int> copyIntArray2 = copyIntArray;
  copyIntArray2.printArray();
  //

  std::cout << std::endl;

  //
  try {
    std::cout << intVoidArray[1000]; // !ATTENTION gerer le try catch pour
  } catch (std::exception &e) {
    std::cout << "Exception: " << e.what() << std::endl;
  }
  //

  return 0;
}
