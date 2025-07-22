/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/22 08:36:06 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

//-‵,┊ needed libs by class
#include "Contact.class.hpp"
#include "phonebook.hpp"

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

	bool recieveInput(Contact *contact, int flag, std::string m);
	bool validateInput(std::string input, int flag) const;
	int inputContactIndex(void) const;
};

#endif