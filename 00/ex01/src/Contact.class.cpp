/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/22 09:03:59 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.class.hpp"

Contact::Contact(void) : first_name(""), last_name(""), nickname(""), phone_number(""), darkest_secret("")
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

	this->first_name = name;
	this->p_fname = formatForPrint(name);
	std::cout << "	✔ First Name SET";
	std::cout << std::endl << std::endl;
	return;
}

void Contact::setLastName(const std::string &name)
{
	std::string print;

	this->last_name = name;
	this->p_lname = formatForPrint(name);
	std::cout << "	✔ Last Name SET";
	std::cout << std::endl << std::endl;
	return;
}

void Contact::setNickName(const std::string &name)
{
	std::string print;

	this->nickname = name;
	this->p_nname = formatForPrint(name);
	std::cout << "	✔ Nickname SET";
	std::cout << std::endl << std::endl;
	return;
}

void Contact::setPhoneNumber(const std::string &num)
{
	std::string print;

	this->phone_number = num;
	std::cout << "	✔ Phone Number SET";
	std::cout << std::endl << std::endl;
	return;
}

void Contact::setDarkestSecret(const std::string &secret)
{
	std::string print;

	this->darkest_secret = secret;
	std::cout << "	✔ Darkest Secret SET";
	std::cout << std::endl << std::endl;
	return;
}

/// @brief creates a version of the input for listing print with 10 width
std::string Contact::formatForPrint(const std::string &input) const
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
			  << this->p_fname << "|";
	std::cout << std::right << std::setw(10)
			  << this->p_lname << "|";
	std::cout << std::right << std::setw(10)
			  << this->p_nname << "|";

	std::cout << std::endl;
	return;
}

/// @brief displays all info of contact
void Contact::displayInfo(void) const
{
	std::cout << "	|▓▒░ First Name: " << this->first_name;
	std::cout << std::endl << std::endl;
	std::cout << "	|▓▒░ Last Name: " << this->last_name;
	std::cout << std::endl << std::endl;
	std::cout << "	|▓▒░ Nickname: " << this->nickname;
	std::cout << std::endl << std::endl;
	std::cout << "	|▓▒░ Phone Number: " << this->phone_number;
	std::cout << std::endl << std::endl;
	std::cout << "	|▓▒░ Darkest Secret: " << this->darkest_secret;
	std::cout << std::endl << std::endl << std::endl;
	return;
}
