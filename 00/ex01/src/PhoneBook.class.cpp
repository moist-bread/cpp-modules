/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/15 18:35:53 by rduro-pe         ###   ########.fr       */
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

	std::cout << "Adding a Contact" << std::endl;
	if (this->amount_of_contacts == 8)
		std::cout << "if you proceed your oldest contact will be overwritten"
				  << std::endl;
	while (std::cin.good())
	{
		std::cout << "enter your first name: ";
		std::cin >> input;
		if (std::cin.good())
		{
			std::cout << "\ngood\n";
			break;
		}
		else
		{
			std::cout << "\nbyebyeeee\n";
			return;
		}
	}
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
