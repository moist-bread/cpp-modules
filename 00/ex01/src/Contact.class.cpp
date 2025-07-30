/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/29 11:28:55 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.class.hpp"

Contact::Contact(void) : _first_name(""), _last_name(""), _nickname(""), _phone_number(""), _darkest_secret("")
{
	//std::cout << "contact constructor" << std::endl;
	return;
}

Contact::~Contact(void)
{
	//std::cout << "contact destructor" << std::endl;
	return;
}

void Contact::setFirstName(const std::string &name)
{
	std::string print;

	this->_first_name = name;
	this->_p_fname = _formatForPrint(name);
	std::cout << "	✔ First Name SET";
	std::cout << std::endl << std::endl;
	return;
}

void Contact::setLastName(const std::string &name)
{
	std::string print;

	this->_last_name = name;
	this->_p_lname = _formatForPrint(name);
	std::cout << "	✔ Last Name SET";
	std::cout << std::endl << std::endl;
	return;
}

void Contact::setNickName(const std::string &name)
{
	std::string print;

	this->_nickname = name;
	this->_p_nname = _formatForPrint(name);
	std::cout << "	✔ Nickname SET";
	std::cout << std::endl << std::endl;
	return;
}

void Contact::setPhoneNumber(const std::string &num)
{
	std::string print;

	this->_phone_number = num;
	std::cout << "	✔ Phone Number SET";
	std::cout << std::endl << std::endl;
	return;
}

void Contact::setDarkestSecret(const std::string &secret)
{
	std::string print;

	this->_darkest_secret = secret;
	std::cout << "	✔ Darkest Secret SET";
	std::cout << std::endl << std::endl;
	return;
}

/// @brief creates a version of the input for listing print with 10 width
std::string Contact::_formatForPrint(const std::string &input) const
{
	std::string print;

	if (input.length() <= 10)
		return (input);
	else
	{
		print = input.substr(0, 10);
		print.at(9) = '.';
		return (print);
	}
}

/// @brief printing contact listing
void Contact::printContact(void) const
{

	std::cout << std::right << std::setw(10)
			  << this->_p_fname << "|";
	std::cout << std::right << std::setw(10)
			  << this->_p_lname << "|";
	std::cout << std::right << std::setw(10)
			  << this->_p_nname << "|";

	std::cout << std::endl;
	return;
}

/// @brief displays all info of contact
void Contact::displayInfo(void) const
{
	std::cout << "	|▓▒░ First Name: " << this->_first_name;
	std::cout << std::endl << std::endl;
	std::cout << "	|▓▒░ Last Name: " << this->_last_name;
	std::cout << std::endl << std::endl;
	std::cout << "	|▓▒░ Nickname: " << this->_nickname;
	std::cout << std::endl << std::endl;
	std::cout << "	|▓▒░ Phone Number: " << this->_phone_number;
	std::cout << std::endl << std::endl;
	std::cout << "	|▓▒░ Darkest Secret: " << this->_darkest_secret;
	std::cout << std::endl << std::endl << std::endl;
	return;
}
