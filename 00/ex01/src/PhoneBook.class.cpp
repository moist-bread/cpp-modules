/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/21 10:41:22 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) : amount_of_contacts(0)
{
	//std::cout << "PhoneBook constructor" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "PhoneBook destructor" << std::endl;
	return;
}

void PhoneBook::addContact(void)
{
	std::string input;
	int idx;

	std::cout << std::endl << "\t════┈┈ADD┈┈════" << std::endl << std::endl;
	if (this->amount_of_contacts == 8)
	{
		std::cout << "phone book is full\n"
				  << "by adding a new one your oldest contact will be overwritten\n"
				  << "do you wish to proceed? YES or NO\n";

		if (recieveInput(NULL, FULL, "choice") == false)
			return;
		for (size_t i = 0; i < 7; i++)
			this->contact_list[i] = this->contact_list[i + 1];
		idx = this->amount_of_contacts - 1;
	}
	else
		idx = this->amount_of_contacts;

	if (recieveInput(&this->contact_list[idx], FIRST_NAME, "First Name") == false)
		return;
	if (recieveInput(&this->contact_list[idx], LAST_NAME, "Last Name") == false)
		return;
	if (recieveInput(&this->contact_list[idx], NICK_NAME, "Nickname") == false)
		return;
	if (recieveInput(&this->contact_list[idx], PHONE_NUM, "Phone Number") == false)
		return;
	if (recieveInput(&this->contact_list[idx], SECRET, "Darkest Secret") == false)
		return;

	std::cout << "Contact added successfully!!! yeyyy!!!\n";
	if (this->amount_of_contacts < 8)
		this->amount_of_contacts++;
	return;
}

void PhoneBook::searchBook(void) const
{
	std::cout << std::endl << "\t════┈┈SEARCH┈┈════" << std::endl << std::endl;
	std::cout << "Searching the PhoneBook" << std::endl;
	if (!this->amount_of_contacts)
	{
		std::cout << "PhoneBook is empty..." << std::endl;
		return;
	}

	std::cout << "SEARCH in process...\n\n";
	for (int i = 0; i < this->amount_of_contacts; i++)
	{
		std::cout << std::right << std::setw(10)
				  << i + 1 << "|";
		this->contact_list[i].printContact();
	}
	std::cout << std::endl
			  << 8 - this->amount_of_contacts
			  << " empty entries in the Phonebook..." << std::endl;

	std::string input;
	int num;

	while (std::cin.good())
	{
		std::cout << "indicate the index you want to search " << ": ";
		std::getline(std::cin, input);

		if (!std::cin.good())
		{
			std::cout << "\nbyebyeeee\n";
			return;
		}
		if (!isdigit(input[0]) || input.length() > 1)
		{
			std::cout << std::endl
					  << "\"" << input
					  << "\" is not a valid input\n"
					  << "we only accept numeric values from 1 until 8\n"
					  << "try again\n";
			continue;
		}

		std::istringstream(input) >> num; // SEARCH ABOUT ISTRINGSTREAM

		if (num > this->amount_of_contacts || num < 1)
		{
			std::cout << std::endl
					  << "\"" << num
					  << "\" is out of bounds\n"
					  << "we only accept 1";
			if (this->amount_of_contacts > 1)
				std::cout << "-" << this->amount_of_contacts;
			std::cout << "\ntry again\n";
			continue;
		}

		break;
	}

	std::cout << "\nDISPLAYING CONTACT No" << num << "\n\n";
	this->contact_list[num - 1].displayInfo();

	return;
}

void PhoneBook::closeBook(void)
{
	std::cout << std::endl << "\t════┈┈EXIT┈┈════" << std::endl << std::endl;
	return;
}

bool PhoneBook::recieveInput(Contact *contact, int flag, std::string m)
{
	std::string input;

	while (std::cin.good())
	{
		std::cout << "enter your " << m << ": ";
		std::getline(std::cin, input);

		if (!std::cin.good())
		{
			std::cout << "\nbyebyeeee\n";
			return (false);
		}

		if (!validate_input(input, flag))
		{
			std::cout << "invalid input, try again\n\n";
			continue;
		}

		// -- set input as the corresponding parameter
		switch (flag)
		{
		case FIRST_NAME:
			contact->setFirstName(input);
			break;
		case LAST_NAME:
			contact->setLastName(input);
			break;
		case NICK_NAME:
			contact->setNickName(input);
			break;
		case PHONE_NUM:
			contact->setPhoneNumber(input);
			break;
		case SECRET:
			contact->setDarkestSecret(input);
			break;
		case FULL:
			if (input.compare("NO") == 0)
				return (std::cout << "\ngive up on adding...\n", false);
			else if (input.compare("YES") == 0)
				std::cout << "\nyou may proceed...\n";
		}

		break;
	}
	return (true);
}

bool PhoneBook::validate_input(std::string input, int flag) const
{
	if (input.empty())
		return (false);

	if (flag == FIRST_NAME || flag == LAST_NAME)
	{
		for (size_t i = 0; input[i]; i++)
			if (!isalpha(input[i]))
			{
				std::cout << "\nnon alphabetical character \""
						  << input[i] << "\" found\n";
				return (false);
			}
	}
	else if (flag == NICK_NAME || flag == SECRET)
	{
		for (size_t i = 0; input[i]; i++)
			if (!isascii(input[i]))
			{
				std::cout << "\nnon ascii character \""
						  << input[i] << "\" found\n";
				return (false);
			}
	}
	else if (flag == PHONE_NUM)
	{
		int idx;
		int sign = 0;

		if (input[0] == '+')
			sign++;
		idx = sign;
		if (!isdigit(input[idx]))
			return (std::cout << "\nincorrectly formatted phone number\n", false);
		while (input[++idx])
			if (!isdigit(input[idx]) || idx >= 17)
				return (std::cout << "\nincorrectly formatted phone number\n", false);
		if ((sign && idx < 5) || (!sign && idx < 3))
			return (std::cout << "\nincorrectly formatted phone number\n", false);
	}
	else if (flag == FULL)
	{
		if (input.compare("YES") && input.compare("NO"))
		{
			std::cout << "\nnon \"YES\" or \"NO\" answer\n";
			return (false);
		}
	}

	return (true);
}
