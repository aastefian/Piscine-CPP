/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:39:31 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 11:45:22 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_CLASS_H
# define ZOMBIE_EVENT_CLASS_H

// Libraries
#include <string>

// Classes
#include "Zombie.class.hpp"

class ZombieEvent {

public:

	ZombieEvent( void );
	~ZombieEvent( void );

	// Attributes
	std::string 	type;

	// Methods
	void	setZombieType( std::string zombieType );
	Zombie* newZombie( std::string name );
	Zombie*	randomChump( void );

};

#endif
