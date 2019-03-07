/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:39:31 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 12:52:39 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_CLASS_H
# define ZOMBIE_HORDE_CLASS_H

// Libraries
#include <string>

// Classes
#include "Zombie.class.hpp"

class ZombieHorde {

public:

	ZombieHorde( int );
	~ZombieHorde( void );

	// Attributes
	std::string	type;
	Zombie**	zombies;
	int			numZombies;

	// Methods
	void	setZombieType( std::string zombieType );
	Zombie* newZombie( std::string name );
	Zombie*	randomChump( void );
	void	announce( void ) const;

};

#endif
