/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/29 11:28:55 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

//-‵,┊ needed libs by class
#include <iomanip>
#include <iostream>
#include <string>

// -->┊( CONTACT )┊.´-★☆★

class Contact
{

public:
	Contact(void);	// constructor
	~Contact(void); // destructor

	// setters for the contact info

	void setFirstName(const std::string &name);
	void setLastName(const std::string &name);
	void setNickName(const std::string &name);
	void setPhoneNumber(const std::string &num);
	void setDarkestSecret(const std::string &secret);

	void printContact(void) const; // prints simplified contact info
	void displayInfo(void) const;  // displays all contact info

private:
	// contact information vars

	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

	std::string _formatForPrint(const std::string &name) const;

	// print version of the info

	std::string _p_fname;
	std::string _p_lname;
	std::string _p_nname;
};

#endif