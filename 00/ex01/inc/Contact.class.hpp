/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/17 17:32:19 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

//-‵,┊ needed libs by class
#include <string>
#include <iostream>
#include <iomanip>

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

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::string formatForPrint(const std::string &name) const;
	
	// print version of the info

	std::string p_fname;
	std::string p_lname;
	std::string p_nname;
	// std::string p_pnum;
	// std::string p_secret;
};

#endif