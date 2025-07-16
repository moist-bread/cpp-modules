/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/16 17:57:37 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) : amount_of_contacts(0)
{
	std::cout << "PhoneBook constructor" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destructor" << std::endl;
	return;
}

void PhoneBook::addContact(void)
{
	std::string input;
	int idx;

	std::cout << "Adding a Contact" << std::endl;
	if (this->amount_of_contacts == 8)
	{
		std::cout << "phone book is full, if you proceed your oldest contact will be overwritten. YES or NO"
				  << std::endl;
		while (std::cin.good())
		{
			std::getline(std::cin, input);
			if (input.compare("YES") == 0)
			{
				std::cout << "\nyou may proceed...\n";
				break;
			}
			else if (input.compare("NO") == 0)
			{
				std::cout << "\ngive up on adding...\n";
				return;
			}
			else if (!std::cin.good())
			{
				std::cout << "\nbyebyeeee\n";
				return;
			}
			else
			{
				std::cout << "\"" << input
					  << "\" is not a valid input\n"
					  << "we only accept \"YES\" or \"NO\"\n";
			}
		}
		for (size_t i = 0; i < 7; i++)
			this->contact_list[i] = this->contact_list[i + 1];
		idx = this->amount_of_contacts - 1;
	}
	else
		idx = this->amount_of_contacts;
	while (std::cin.good())
	{
		std::cout << "enter your first name: ";
		std::getline(std::cin, input);
		if (std::cin.good())
		{
			if (!validate_input(input, 'f'))
			{
				std::cout << "\ninvalid input, try again\n";	
				continue;
			}
			std::cout << "\ngood\n";
			this->contact_list[idx].setFirstName(input);
			break;
		}
		else
		{
			std::cout << "\nbyebyeeee\n";
			return;
		}
	}
	// only alpha - first last
	// ascii - nickname secret
	// ^[\+]?[0-9]{1,3}?[\s]?[0-9]{1,3}[\s]?[0-9]{1,3}[\s]?[0-9]{1,3}?$ phone num
	while (std::cin.good())
	{
		std::cout << "enter your last name: ";
		std::getline(std::cin, input);
		if (std::cin.good())
		{
			std::cout << "\ngood\n";
			this->contact_list[idx].setLastName(input);
			break;
		}
		else
		{
			std::cout << "\nbyebyeeee\n";
			return;
		}
	}
	while (std::cin.good())
	{
		std::cout << "enter your nickname: ";
		std::getline(std::cin, input);
		if (std::cin.good())
		{
			std::cout << "\ngood\n";
			this->contact_list[idx].setNickName(input);
			break;
		}
		else
		{
			std::cout << "\nbyebyeeee\n";
			return;
		}
	}
	while (std::cin.good())
	{
		std::cout << "enter your phone number: ";
		std::getline(std::cin, input);
		if (std::cin.good())
		{
			std::cout << "\ngood\n";
			this->contact_list[idx].setPhoneNumber(input);
			break;
		}
		else
		{
			std::cout << "\nbyebyeeee\n";
			return;
		}
	}
	while (std::cin.good())
	{
		std::cout << "enter your darkest secret: ";
		std::getline(std::cin, input);
		if (std::cin.good())
		{
			std::cout << "\ngood\n";
			this->contact_list[idx].setDarkestSecret(input);
			break;
		}
		else
		{
			std::cout << "\nbyebyeeee\n";
			return;
		}
	}
	std::cout << "Contact added successfully!!! yeyyy!!!\n";
	if (this->amount_of_contacts < 8)
		this->amount_of_contacts++;
	return;
}

void PhoneBook::searchBook(void) const
{
	std::cout << "Searching the PhoneBook" << std::endl;
	if (!this->amount_of_contacts)
		std::cout << "PhoneBook is empty..." << std::endl;
	else
	{
		std::cout << "SEARCH in process..." << std::endl;
		for (int i = 0; i < this->amount_of_contacts; i++)
		{
			this->contact_list[i].printContact();
		}
	}
	return;
}

void PhoneBook::closeBook(void)
{
	std::cout << "Bye bye book!!" << std::endl;
	return;
}
