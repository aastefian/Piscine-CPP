/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:13:38 by svilau            #+#    #+#             */
/*   Updated: 2018/10/01 16:03:08 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main( void ) {

	Sample	instance;

	instance.setFoo( 42 );
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
	instance.setFoo( -42 );
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;

	return 0;
}
