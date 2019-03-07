/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:08:08 by svilau            #+#    #+#             */
/*   Updated: 2018/10/12 16:34:51 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_HPP
#define MUTANTSTACK_CLASS_HPP

// #include <vector>
#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T> {
public:
  MutantStack<T>(void) {};
  MutantStack<T>(MutantStack<T> const &rhs) {
    this->_list = rhs._list;
    return *this;
  };
  ~MutantStack<T>(void) {};

  // Attributes

  // Member functions
  typedef std::list<int>::iterator iterator;

  T top(void){
    return this->_list.back();
  }

  T size(void) {
    return this->_list.size();
  }

  void pop() {
    this->_list.pop_back();
  }

  void push(T input){
    this->_list.push_back(input);
  }

  iterator begin() {
    return _list.begin();
  }

  iterator end() {
    return _list.end();
  }

  // Operators
  MutantStack<T> &operator=(MutantStack<T> const &rhs) {
    this->_list = rhs._list;
    return *this;
  };

protected:
  // Attributes

  // Member functions

private:
  // Attributes
  // std::stack<T> _stack;
  std::list<T> _list;
  // Member functions
};

#endif // MutantStack_CLASS_HPP
