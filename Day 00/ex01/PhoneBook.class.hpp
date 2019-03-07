/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 18:14:32 by svilau            #+#    #+#             */
/*   Updated: 2018/10/02 13:11:46 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_H
# define PHONE_BOOK_CLASS_H

// Libraries
#include <string>

// Classes
#include "Contact.class.hpp"

// Macros
#define MAX_CONTACTS 8

struct t_parameters {
	int		contactColumnWidth;
};

class PhoneBook {

public:


	PhoneBook(	void );
	~PhoneBook( void );

	// Attributes
	t_parameters	parameters;

	// Methods
	void			addContact( Contact contact );
	void			showContacts( void ) const;
	void			showContact( int ) const;
	bool			isEmpty( void ) const;
	bool			isFull( void ) const;

private:

	// Attributs
	Contact			_contacts[MAX_CONTACTS];
	int				_numberOfContacts;

	// Methods
	std::string		_formatColumn( std::string ) const;

};

#endif
