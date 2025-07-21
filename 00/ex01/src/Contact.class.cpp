/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/21 10:24:22 by rduro-pe         ###   ########.fr       */
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

	std::cout << "set first name" << std::endl;
	this->first_name = name;
	this->p_fname = formatForPrint(name);
	return;
}

void Contact::setLastName(const std::string &name)
{
	std::string print;

	std::cout << "set last name" << std::endl;
	this->last_name = name;
	this->p_lname = formatForPrint(name);
	return;
}

void Contact::setNickName(const std::string &name)
{
	std::string print;

	std::cout << "set nickname" << std::endl;
	this->nickname = name;
	this->p_nname = formatForPrint(name);
	return;
}

void Contact::setPhoneNumber(const std::string &num)
{
	std::string print;

	std::cout << "set phone num" << std::endl;
	this->phone_number = num;
	// this->p_pnum = formatForPrint(num);
	return;
}

void Contact::setDarkestSecret(const std::string &secret)
{
	std::string print;

	std::cout << "set dark secret" << std::endl;
	this->darkest_secret = secret;
	// this->p_secret = formatForPrint(secret);
	return;
}

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

void Contact::printContact(void) const
{
	// std::cout << "printing the contact!!"
	// 		  << std::endl;

	std::cout << std::right << std::setw(10)
			  << this->p_fname << "|";
	std::cout << std::right << std::setw(10)
			  << this->p_lname << "|";
	std::cout << std::right << std::setw(10)
			  << this->p_nname << "|";
	// std::cout << std::right << std::setw(10)
	// 		  << this->p_pnum << "|";
	// std::cout << std::right << std::setw(10)
	// 		  << this->p_secret;
	std::cout << std::endl;
	return;
}

void Contact::displayInfo(void) const
{
	std::cout << "display the info!!" << std::endl;

	std::cout << "First Name: " << this->first_name << std::endl;
	std::cout << "Last Name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
	std::cout << std::endl;

	return;
}
