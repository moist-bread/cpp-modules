/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/14 18:59:12 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

//-‵,┊ needed libs by class
#include "Contact.class.hpp"

// -->┊( PHONEBOOK )┊.´-★☆★

class PhoneBook
{
public:
	PhoneBook(void);  // constructor
	~PhoneBook(void); // destructor

	void addContact(void);
	void searchBook(void);
	void closeBook(void);

private:
	Contact contact_list[8];
};

#endif