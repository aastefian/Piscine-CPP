/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 17:01:37 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CLASS_H
# define HUMAN_B_CLASS_H

// Libraries
#include <string>

// Classes
#include "Weapon.class.hpp"

class HumanB {

public:

	HumanB( std::string );
	~HumanB( void );

	// Attributes

	// Methods
	void				attack( void ) const;
	void				setWeapon( Weapon& );

private:

	std::string			_name;
	Weapon* 			_weapon;

};

#endif
