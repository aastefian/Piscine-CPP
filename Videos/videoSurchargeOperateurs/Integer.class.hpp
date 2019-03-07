/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:49:37 by svilau            #+#    #+#             */
/*   Updated: 2018/10/04 11:48:44 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

// Libraries
#include <iostream>

class Integer {

public:

	Integer( int const n );
	~Integer( void );

	// Attributes

	// Methods
	int getValue(  void ) const;

	Integer& operator=( Integer const & rhs);
	Integer	 operator+( Integer const & rhs) const;

private:

	int _n;

};

std::ostream& operator<<( std::ostream& o, Integer const &rhs);

#endif
