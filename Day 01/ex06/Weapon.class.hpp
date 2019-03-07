/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 16:19:53 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

// Libraries
#include <string>

class Weapon {

public:

	Weapon( std::string );
	~Weapon( void );

	// Attributes

	// Methods
	const std::string&	getType( void ) const;
	void				setType( std::string );

private:

	std::string	_type;

};

#endif
