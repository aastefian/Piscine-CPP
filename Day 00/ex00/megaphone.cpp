/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 16:56:47 by svilau            #+#    #+#             */
/*   Updated: 2018/10/01 17:56:43 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	stringToUpper( std::string phrase) {

	std::string	resultPhrase;

	for( std::string::iterator it = phrase.begin(); it != phrase.end(); ++it ) {
		resultPhrase.push_back( (char)(std::toupper( *it )) );
	}

	return resultPhrase;
};

int 	main ( int ac, char *av[] ) {

	int i = 0;

	if( ac > 1 ) {
		for( i = 1; i < ac; i++ ) {
			std::cout << stringToUpper( av[i] );
		}
		std::cout << std::endl;
	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}

	return 0;
}
