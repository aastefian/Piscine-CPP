/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:13:38 by svilau            #+#    #+#             */
/*   Updated: 2018/10/04 08:34:28 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.class.hpp"

int main( void ) {

	Human	human;

	std::cout << "Solider2 ";
	human.action( "meleeAttack", "Solider1" );

	std::cout << "Solider1 ";
	human.action( "rangedAttack", "Solider2" );

	std::cout << "Solider2 ";
	human.action( "intimidatingShout", "Solider1" );

	std::cout << "Solider2 is dumb and kills himself" << std::endl;

	return 0;
}
