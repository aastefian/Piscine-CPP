/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 16:56:47 by svilau            #+#    #+#             */
/*   Updated: 2018/10/04 11:12:08 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <istream>
#include <sstream>
#include <string>
#include <fstream>

std::string	stringToUpper( std::string phrase ) {

	std::string	resultPhrase;

	for( std::string::iterator it = phrase.begin(); it != phrase.end(); ++it ) {
		resultPhrase.push_back( (char)(std::toupper( *it )) );
	}

	return resultPhrase;
};

int			promptSearchIndex( void ) {

	std::string			input;
	std::stringstream 	ss;
	int					desiredIndex;

	std::cout << "Index of the desired entry: ";
	std::getline ( std::cin, input );
	ss.str(input);

	if( ss >> desiredIndex )
		return desiredIndex;
	else
		return -1;
}

int 	main ( int ac, char *av[] ) {

	std::string		fileName, searchTerm, replaceBy, line;

	if( ac == 4 && av[1] && av[2] && av[3]) {
		fileName = av[1];
		searchTerm = av[2];
		replaceBy = av[3];

		// Ouverture fichier source
		std::ifstream	sourceFile( fileName ); // a ajouter is open
		if( !sourceFile.is_open() ) {
			std::cout << "Unable to open source file" << std::endl;
			return -1;
		}
		//

		// Creation/ouverture fichier destination
		std::ofstream   destinationFile( stringToUpper( fileName ) + ".replace" );
		if( !destinationFile.is_open() ) {
			std::cout << "Unable to open/create destination file" << std::endl;
			return -1;
		}
		//

		while( std::getline( sourceFile, line ) ) {
			size_t found = line.find( searchTerm);
			while( found != std::string::npos ) {
				if( found != std::string::npos ) {
					line.replace(found, searchTerm.length(), replaceBy);
					found = line.find( searchTerm, found + replaceBy.length());
				}
			}

			if( !sourceFile.eof() ) {
				destinationFile << line << std::endl;
			} else {
				destinationFile << line;
			}
		}
		destinationFile.close();
	} else {
		std::cout << "Usage: ./replace [fileName] [searchTerm] [replaceBy]" << std::endl;
	}


	return 0;
}
