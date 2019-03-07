/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:18:28 by svilau            #+#    #+#             */
/*   Updated: 2018/10/01 18:32:40 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact( void ) {

	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
	this->_login = "";
	this->_postalAdress = "";
	this->_emailAdress = "";
	this->_phoneNumber = "";
	this->_birthdayDate = "";
	this->_favoriteMeal = "";
	this->_underwearColor = "";
	this->_darkestSecret = "";

	return;
}

Contact::~Contact( void ) {

	return;
}

std::string	Contact::getFirstName( void ) const {
	return this->_firstName;
};

std::string	Contact::getLastName( void ) const {
	return this->_lastName;
};

std::string	Contact::getNickname( void ) const {
	return this->_nickname;
};

std::string	Contact::getLogin( void ) const {
	return this->_login;
};

std::string	Contact::getPostalAdress( void ) const {
	return this->_postalAdress;
};

std::string	Contact::getEmailAdress( void ) const {
	return this->_emailAdress;
};

std::string	Contact::getPhoneNumber( void ) const {
	return this->_phoneNumber;
};

std::string	Contact::getBirthdayDate( void ) const {
	return this->_birthdayDate;
};

std::string	Contact::getFavoriteMeal( void ) const {
	return this->_favoriteMeal;
};

std::string	Contact::getUnderwearColor( void ) const {
	return this->_underwearColor;
};

std::string	Contact::getDarkestSecret( void ) const {
	return this->_darkestSecret;
};

void		Contact::setFirstName( std::string input ) {

	this->_firstName = input;

	return;
};

void		Contact::setLastName( std::string input ) {

	this->_lastName = input;

	return;
};

void		Contact::setNickname( std::string input ) {

	this->_nickname = input;

	return;
};

void		Contact::setLogin( std::string input ) {

	this->_login = input;

	return;
};

void		Contact::setPostalAdress( std::string input ) {

	this->_postalAdress = input;

	return;
};

void		Contact::setEmailAdress( std::string input ) {

	this->_emailAdress = input;

	return;
};

void		Contact::setPhoneNumber( std::string input ) {

	this->_phoneNumber = input;

	return;
};

void		Contact::setBirthdayDate( std::string input ) {

	this->_birthdayDate = input;

	return;
};

void		Contact::setFavoriteMeal( std::string input ) {

	this->_favoriteMeal = input;

	return;
};

void		Contact::setUnderwearColor( std::string input ) {

	this->_underwearColor = input;

	return;
};

void		Contact::setDarkestSecret( std::string input ) {

	this->_darkestSecret = input;

	return;
};
