/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/02 15:34:41 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) {

	this->_numberOfContacts = 0; // !!!!!!!!!!!!!!!!!!!!! ATTENTION - REMETTRE A 0 !!!!!!!!!!!!!!!!!!!!!!
	this->parameters.contactColumnWidth = 10;
	return;
}

PhoneBook::~PhoneBook( void ) {

	return;
}

bool			PhoneBook::isEmpty( void ) const {
	return !this->_numberOfContacts ? true : false;
};

bool			PhoneBook::isFull( void ) const {
	return this->_numberOfContacts == (int)(MAX_CONTACTS) ? true : false;
};

void			PhoneBook::addContact( Contact contact ) {

	if( this->_numberOfContacts >= MAX_CONTACTS ) {
		std::cout << "Maximum number of contacts reached" << std::endl << std::endl;
	} else {
		this->_contacts[this->_numberOfContacts] = contact;
		this->_numberOfContacts++;
	}

	return;
}

void			PhoneBook::showContacts( void ) const {

	if( !this->_numberOfContacts ) { // S'il y a pas de contacts on affiche un message
		std::cout << "No contacts in phonebook." << std::endl;
	}

	for( int i = 0; i < this->_numberOfContacts; i++) { // On parcour
		std::cout << "|" << std::setw(this->parameters.contactColumnWidth) << i << "|"
			<< std::setw(this->parameters.contactColumnWidth) << this->_formatColumn( this->_contacts[i].getFirstName() ) << "|"
			<< std::setw(this->parameters.contactColumnWidth) << this->_formatColumn( this->_contacts[i].getLastName() ) << "|"
			<< std::setw(this->parameters.contactColumnWidth) << this->_formatColumn( this->_contacts[i].getNickname() ) << "|"
		<< std::endl;
	}

	std::cout << std::endl; // Endline design
	return;
}

void			PhoneBook::showContact( int desiredIndex ) const {

	if( !this->_numberOfContacts ) { // S'il y a pas de contacts on affiche un message
		std::cout << "No contacts in phonebook." << std::endl << std::endl;
		return;
	}

	if( desiredIndex < 0 || desiredIndex >= this->_numberOfContacts ) {
		std::cout << "Invalid index." << std::endl << std::endl;
	} else {
		std::cout << "First name: " << this->_contacts[desiredIndex].getFirstName() << std::endl;
		std::cout << "Last name: " << this->_contacts[desiredIndex].getLastName() << std::endl;
		std::cout << "Nickname: " << this->_contacts[desiredIndex].getNickname() << std::endl;
		std::cout << "Login: " << this->_contacts[desiredIndex].getLogin() << std::endl;
		std::cout << "Postal adress: " << this->_contacts[desiredIndex].getPostalAdress() << std::endl;
		std::cout << "Email adress: " << this->_contacts[desiredIndex].getEmailAdress() << std::endl;
		std::cout << "Phone number: " << this->_contacts[desiredIndex].getPhoneNumber() << std::endl;
		std::cout << "Birthday date: " << this->_contacts[desiredIndex].getBirthdayDate() << std::endl;
		std::cout << "Favorite meal: " << this->_contacts[desiredIndex].getFavoriteMeal() << std::endl;
		std::cout << "Underwear color: " << this->_contacts[desiredIndex].getUnderwearColor() << std::endl;
		std::cout << "Darkest secret: " << this->_contacts[desiredIndex].getDarkestSecret() << std::endl;

		std::cout << std::endl; // Endline design
	}

	return;
}

std::string			PhoneBook::_formatColumn( std::string columnText ) const {

	if( (int)columnText.length() > this->parameters.contactColumnWidth ) {
		columnText.at( this->parameters.contactColumnWidth - 1 ) = '.';
		columnText.resize( this->parameters.contactColumnWidth );
	}

	return columnText;
}

// void	PhoneBook::_privateBar( void ) const {

// 	std::cout << "Member function _privateBar called" << std::endl;
// 	return;
// }
