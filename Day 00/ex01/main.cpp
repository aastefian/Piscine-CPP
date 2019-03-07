/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 16:56:47 by svilau            #+#    #+#             */
/*   Updated: 2018/10/02 15:37:31 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <istream>
#include <sstream>

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

std::string	stringToUpper( std::string phrase ) {

	std::string	resultPhrase;

	for( std::string::iterator it = phrase.begin(); it != phrase.end(); ++it ) {
		resultPhrase.push_back( (char)(std::toupper( *it )) );
	}

	return resultPhrase;
};

Contact		promptContactInfo( void ) {

	Contact		newContact;
	std::string	tmp;

	std::cout << "First name: ";
	std::getline ( std::cin, tmp );
	newContact.setFirstName( tmp );

	std::cout << "Last name: ";
	std::getline ( std::cin, tmp );
	newContact.setLastName( tmp );

	std::cout << "Nickname: ";
	std::getline ( std::cin, tmp );
	newContact.setNickname( tmp );

	std::cout << "Login: ";
	std::getline ( std::cin, tmp );
	newContact.setLogin( tmp );

	std::cout << "Postal adress: ";
	std::getline ( std::cin, tmp );
	newContact.setPostalAdress( tmp );

	std::cout << "Email adress: ";
	std::getline ( std::cin, tmp );
	newContact.setEmailAdress( tmp );

	std::cout << "Phone number: ";
	std::getline ( std::cin, tmp );
	newContact.setPhoneNumber( tmp );

	std::cout << "Birthday date: ";
	std::getline ( std::cin, tmp );
	newContact.setBirthdayDate( tmp );

	std::cout << "Favorite meal: ";
	std::getline ( std::cin, tmp );
	newContact.setFavoriteMeal( tmp );

	std::cout << "Underwear color: ";
	std::getline ( std::cin, tmp );
	newContact.setUnderwearColor( tmp );

	std::cout << "Darkest secret: ";
	std::getline ( std::cin, tmp );
	newContact.setDarkestSecret( tmp );

	std::cout << std::endl; // Endline design
	return newContact;
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

	PhoneBook	phoneBook;
	std::string	command;
	( void ) av;

	if( ac > 1 ) {
		std::cout << "No arguments accepted" << std::endl;
		return 0;
	}

	std::cout << "PHONEBOOK" << std::endl << std::endl;
	std::cout << "Possible commands: ADD, SEARCH, EXIT." << std::endl;
	std::cout << "Your command m'lord: ";
	while( std::getline (std::cin, command) ) {
		std::cout << std::endl;
		command = stringToUpper( command );

		if( command == "EXIT") {
			return 0;
		} else if( command == "ADD" ) {
			if( !phoneBook.isFull() )
				phoneBook.addContact( promptContactInfo() );
			else
				std::cout << "Phonebook full." << std::endl << std::endl;
		} else if( command == "SEARCH" ) {
			phoneBook.showContacts();

			if( !phoneBook.isEmpty() ) {
				phoneBook.showContact( promptSearchIndex() );
			}
		} else {
			std::cout << "Commande invalide, reesayez." << std::endl << std::endl;
		}
		std::cout << "Your command m'lord: ";
	}

	return 0;
}
