/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 12:18:08 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H

// Libraries
#include <string>

// Classes
#include "Brain.class.hpp"

class Human {

public:

	Human( void );
	~Human( void );

	// Attributes

	// Methods
	std::string			identify( void );
	const Brain&		getBrain( void );

private:

	// Attributes
	const Brain	_newBrain;

};

#endif
