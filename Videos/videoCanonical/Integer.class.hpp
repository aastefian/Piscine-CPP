/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:49:37 by svilau            #+#    #+#             */
/*   Updated: 2018/10/04 12:08:34 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

// Libraries
#include <iostream>

class Integer {

public:

	Integer( void );
	Integer( int const n );
	Integer( Integer const &src );
	~Integer( void );

	// Attributes
	Integer& operator=( Integer const &rhs);

	// Methods
	int getFoo(  void ) const;


private:

	int _foo;

};

std::ostream& operator<<( std::ostream& o, Integer const &rhs);

#endif
