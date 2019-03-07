/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/01 12:49:26 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_H
# define PONY_CLASS_H

// Libraries
#include <string>

class Pony {

public:

	Pony( int age, int numLegs, std::string color );
	~Pony( void );

	// Attributes
	int				age;
	int				numLegs;
	std::string 	color;

	// Methods
	void	ponyOnTheHeap( void );
	void	ponyOnTheStack( void );

};

#endif
