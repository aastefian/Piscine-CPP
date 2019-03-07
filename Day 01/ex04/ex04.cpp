/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:59:11 by svilau            #+#    #+#             */
/*   Updated: 2018/10/03 13:06:02 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <iostream>

int	main( void ) {

	std::string	brain = "HI THIS IS BRAIN";
	std::string* pointerToBrain;
	std::string& referenceToBrain = brain;

	pointerToBrain = &brain;

	std::cout << "Original: " << brain << std::endl;
	std::cout << "Pointer: " << *pointerToBrain << std::endl;
	std::cout << "Reference: " << referenceToBrain << std::endl;

	return 0;
}
