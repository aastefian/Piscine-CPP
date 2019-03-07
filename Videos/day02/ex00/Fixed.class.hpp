/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:49:37 by svilau            #+#    #+#             */
/*   Updated: 2018/10/04 13:27:13 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

// Libraries
#include <iostream>

class Fixed
{

  public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);

	// Attributes
	Fixed &operator=(Fixed const &rhs);

	// Methods
	int getRawBits(void) const;
	void setRawBits(int const raw);

  private:
	int _fixedPointValue;
	static int const _fractionalBits;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
