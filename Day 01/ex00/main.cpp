/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:13:38 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 10:09:03 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.class.hpp"

int main( void ) {

	Pony	testPony( 1, 3, "purple" );

	std::cout << std::endl << "-- HEAP --" << std::endl;
	testPony.ponyOnTheHeap();
	std::cout << "-----------" << std::endl;

	std::cout << std::endl << "-- STACK --" << std::endl;
	testPony.ponyOnTheStack();
	std::cout << "-----------" << std::endl << std::endl;

	return 0;
}
