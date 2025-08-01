/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/29 11:33:08 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

//-‵,┊ needed libs by class
#include "Contact.class.hpp"
#include <cstdlib>

// -->┊( EXTRA FUNCTION PROTOTYPES )┊.´-★☆★
void display_incorrect_command(std::string input);
void display_forced_exit(void);

// -->┊( DEFINES )┊.´-★☆★
/// @brief flags for input types
typedef enum s_input_type
{
	FIRST_NAME,
	LAST_NAME,
	NICK_NAME,
	PHONE_NUM,
	SECRET,
	FULL,
	SEARCH,
	EMPTY
} t_input_type;

// -->┊( PHONEBOOK )┊.´-★☆★

class PhoneBook
{
public:
	PhoneBook(void);  // constructor
	~PhoneBook(void); // destructor

	void addContact(void);
	void searchBook(void) const;
	void closeBook(void);

private:
	Contact contact_list[8];
	int amount_of_contacts;

	void _displayFullWarn(void) const;
	bool _recieveInput(Contact *contact, int flag, std::string m);
	bool _validateInput(std::string input, int flag) const;
	void _displayInvalidInput(int flag) const;
	void _displayBookTop(void) const;
	void _displayBookBottom(int n) const;
	int _inputContactIndex(void) const;
};

#endif