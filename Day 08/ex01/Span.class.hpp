/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:08:08 by svilau            #+#    #+#             */
/*   Updated: 2018/10/12 17:24:19 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
#define ARRAY_CLASS_HPP

#include <vector>
#include <iostream>

class Span {
public:
  Span(void);
  Span(unsigned int n);
  Span(Span const &rhs);
  ~Span(void);

  // Attributes

  // Member functions
  void addNumber(int input);
  size_t shortestSpan(void);
  size_t longestSpan(void);

  // Operators
  Span &operator=(Span const &rhs);

  class OutOfLimitsException : public std::exception {
  public:
    // OutOfLimitsException(void);
    // OutOfLimitsException(OutOfLimitsException const &);
    // virtual ~OutOfLimitsException(void) throw();
    // OutOfLimitsException &operator=(OutOfLimitsException const &);

    virtual const char *what() const throw();
  };

  class SpanNotCalculable : public std::exception {
  public:
    // SpanNotCalculable(void);
    // SpanNotCalculable(SpanNotCalculable const &);
    // virtual ~SpanNotCalculable(void) throw();
    // SpanNotCalculable &operator=(SpanNotCalculable const &);

    virtual const char *what() const throw();
  };

protected:
  // Attributes

  // Member functions

private:
  // Attributes
  std::vector<int> _vector;
  // size_t _numberElements;

  // Member functions
};

#endif // SPAN_CLASS_HPP
