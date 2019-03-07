/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 18:38:36 by svilau            #+#    #+#             */
/*   Updated: 2018/10/02 13:12:08 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class	Contact {

public:

	Contact( void );
	~Contact( void );

	// Attributs
	std::string	getFirstName( void ) const;
	std::string	getLastName( void ) const;
	std::string	getNickname( void ) const;
	std::string	getLogin( void ) const;
	std::string	getPostalAdress( void ) const;
	std::string	getEmailAdress( void ) const;
	std::string	getPhoneNumber( void ) const;
	std::string	getBirthdayDate( void ) const;
	std::string	getFavoriteMeal( void ) const;
	std::string	getUnderwearColor( void ) const;
	std::string	getDarkestSecret( void ) const;

	// Methods
	void		setFirstName( std::string );
	void		setLastName( std::string );
	void		setNickname( std::string );
	void		setLogin( std::string );
	void		setPostalAdress( std::string );
	void		setEmailAdress( std::string );
	void		setPhoneNumber( std::string );
	void		setBirthdayDate( std::string );
	void		setFavoriteMeal( std::string );
	void		setUnderwearColor( std::string );
	void		setDarkestSecret( std::string );

private:

	// Attributs
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_login;
	std::string	_postalAdress;
	std::string	_emailAdress;
	std::string	_phoneNumber;
	std::string	_birthdayDate;
	std::string	_favoriteMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;

};

#endif
