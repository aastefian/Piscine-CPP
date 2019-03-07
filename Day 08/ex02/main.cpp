/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 16:19:08 by svilau            #+#    #+#             */
/*   Updated: 2018/10/12 18:13:39 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <iostream>

// Classes
#include "MutantStack.class.hpp"

int main(void) {

  // MutantStack<int> newStack;
  // std::stack<int> stack;

  // newStack.top();
  // std::cout <<  newStack.size() << std::endl;
  // std::cout <<  newStack.empty() << std::endl;
  // newStack.push(1);
  // newStack.push(10);
  // std::cout <<  newStack.top() << std::endl;
  // newStack.pop();

  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  //[...]
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);

  MutantStack<int> s2;
  s2 = mstack;
  MutantStack<int>::iterator it2 = s2.begin();
  MutantStack<int>::iterator ite2 = s2.end();
  ++it2;
  --it2;
  while (it2 != ite2) {
    std::cout << *it2 << std::endl;
    ++it2;
  }

  return 0;
}
