/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 16:47:27 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CLASS_H
# define HUMAN_A_CLASS_H

// Libraries
#include <string>

// Classes
#include "Weapon.class.hpp"

class HumanA {

public:

	HumanA( std::string, Weapon& );
	~HumanA( void );

	// Attributes

	// Methods
	void				attack( void ) const;
	void				setWeapon( Weapon );

private:

	// Attributes
	std::string			_name;
	Weapon& 				_weapon;

	// Methods

};

#endif
