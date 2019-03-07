/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 14:05:47 by svilau            #+#    #+#             */
/*   Updated: 2018/10/12 17:16:14 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

#include "Span.class.hpp"

Span::Span(unsigned int n) { this->_vector.reserve(n); }
Span::Span(Span const &rhs) {
  *this = rhs;
}

// Destructor
Span::~Span(void) {}

// Member functions
void Span::addNumber(int input) {
  if (this->_vector.size() < this->_vector.capacity()) {
    this->_vector.push_back(input);
  } else {
    throw OutOfLimitsException();
  }
}

size_t Span::shortestSpan(void) {

  if (this->_vector.size() > 1) {
    std::vector<int>::iterator it;
    unsigned int minDelta = UINT_MAX;

    std::vector<int> copy = this->_vector;
    std::sort(copy.begin(), copy.end());
    for (it = ++copy.begin(); it != copy.end(); ++it) {
      unsigned int delta = abs(*it - *(it - 1));
      if (minDelta >= delta) {
        minDelta = delta;
      }
    }
    return minDelta;
  } else {
    throw SpanNotCalculable();
  }
}

size_t Span::longestSpan(void) {
  if (this->_vector.size() > 1) {
    return static_cast<size_t>(
        abs(*std::max_element(this->_vector.begin(), this->_vector.end()) -
            *std::min_element(this->_vector.begin(), this->_vector.end())));
  } else {
    throw SpanNotCalculable();
  }
}

// Exceptions
const char *Span::OutOfLimitsException::what() const throw() {
  return "You are trying to add more than maximum sizeo of vector\n";
}

const char *Span::SpanNotCalculable::what() const throw() {
  return "Vector has too few data to calculate span\n";
}

// Operators
Span &Span::operator=(Span const &rhs) {
  this->_vector = rhs._vector;
  return *this;
}
