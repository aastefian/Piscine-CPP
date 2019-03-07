/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:13:38 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 12:55:04 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.class.hpp"

int main( void ) {

	ZombieHorde horde(10);

	horde.announce();

	srand(time(NULL));

	return 0;
}
