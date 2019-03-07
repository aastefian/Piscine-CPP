/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:49:37 by svilau            #+#    #+#             */
/*   Updated: 2018/10/04 17:31:57 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

// Libraries
#include <iostream>

class Fixed {

public:
  Fixed(void);
  Fixed(const int);
  Fixed(const float);
  Fixed(Fixed const &src);
  ~Fixed(void);

  // Attributes

  // Operators
  Fixed &operator=(Fixed const &rhs);

  bool operator==(Fixed const &rhs);
  bool operator!=(Fixed const &rhs);
  bool operator>(Fixed const &rhs);
  bool operator<(Fixed const &rhs);
  bool operator>=(Fixed const &rhs);
  bool operator<=(Fixed const &rhs);

  Fixed operator+(Fixed const &rhs);
  Fixed operator-(Fixed const &rhs);
  Fixed operator*(Fixed const &rhs);
  Fixed operator/(Fixed const &rhs);

  Fixed &operator++(void);
  Fixed operator++(int);
  Fixed &operator--(void);
  Fixed operator--(int);

  // Methods
  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;
  static Fixed &min(Fixed &a, Fixed &b);
  static Fixed const &min(Fixed const &a, Fixed const &b);
  static Fixed &max(Fixed &a, Fixed &b);
  static Fixed const &max(Fixed const &a, Fixed const &b);

private:
  int _fixedPointValue;
  static int const _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
