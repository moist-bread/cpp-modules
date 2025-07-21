/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/21 18:45:06 by rduro-pe         ###   ########.fr       */
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

	std::cout << std::endl << "	════┈┈ADD┈┈════" << std::endl << std::endl;
	if (this->amount_of_contacts == 8)
	{
		// -- phonebook is full, confirm to proceed
		display_full_warn();
		if (recieveInput(NULL, FULL, "your choice") == false)
			return;
		for (size_t i = 0; i < 7; i++)
			this->contact_list[i] = this->contact_list[i + 1];
		idx = this->amount_of_contacts - 1;
	}
	else
		idx = this->amount_of_contacts;

	// -- ask for input to fill out contact
	if (!recieveInput(&this->contact_list[idx], FIRST_NAME, "First Name"))
		return;
	if (!recieveInput(&this->contact_list[idx], LAST_NAME, "Last Name"))
		return;
	if (!recieveInput(&this->contact_list[idx], NICK_NAME, "Nickname"))
		return;
	if (!recieveInput(&this->contact_list[idx], PHONE_NUM, "Phone Number"))
		return;
	if (!recieveInput(&this->contact_list[idx], SECRET, "Darkest Secret"))
		return;

	if (this->amount_of_contacts < 8)
		this->amount_of_contacts++;
	std::cout << "\n	════┈┈ contact added successfully ┈┈════";
	std::cout << std::endl << std::endl;
	return;
}


bool PhoneBook::recieveInput(Contact *contact, int flag, std::string m)
{
	std::string input;

	while (std::cin.good())
	{
		std::cout << "	▓▒░ ENTER " << m << ": ";
		std::getline(std::cin, input);

		if (!std::cin.good())
			return(display_forced_exit(), false);

		if (!validate_input(input, flag))
			continue;

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
				return (std::cout << "	gave up on adding...\n\n", false);
			else if (input.compare("YES") == 0)
				std::cout << "	you may proceed...\n\n";
		}

		break;
	}
	return (true);
}

bool PhoneBook::validate_input(std::string input, int flag) const
{
	if (input.empty())
		return (display_invalid_input(EMPTY), false);

	if (flag == FIRST_NAME || flag == LAST_NAME)
	{
		for (size_t i = 0; input[i]; i++)
			if (!isalpha(input[i]))
				return (display_invalid_input(flag), false);
	}
	else if (flag == NICK_NAME || flag == SECRET)
	{
		for (size_t i = 0; input[i]; i++)
			if (!isascii(input[i]))
				return (display_invalid_input(flag), false);
	}
	else if (flag == PHONE_NUM)
	{
		int idx;
		int sign = 0;

		if (input[0] == '+')
			sign++;
		idx = sign;
		if (!isdigit(input[idx]))
			return (display_invalid_input(flag), false);
		while (input[++idx])
			if (!isdigit(input[idx]) || idx >= 17)
				return (display_invalid_input(flag), false);
		if ((sign && idx < 5) || (!sign && idx < 3))
			return (display_invalid_input(flag), false);
	}
	else if (flag == FULL)
	{
		if (input.compare("YES") && input.compare("NO"))
			return (display_invalid_input(flag), false);
	}

	return (true);
}


void PhoneBook::searchBook(void) const
{
	std::cout << std::endl << "	════┈┈SEARCH┈┈════" << std::endl << std::endl;
	display_book_top();
	if (!this->amount_of_contacts)
	{
		std::cout << "		PHONEBOOK IS EMPTY..." << std::endl;
		return(display_book_bottom(0));
	}
	std::cout << std::endl << "\t      |";
		std::cout << std::right << std::setw(10)
				  << "index" << "|";
	std::cout << std::right << std::setw(10)
			  << "first name" << "|";
	std::cout << std::right << std::setw(10)
			  << "last name" << "|";
	std::cout << std::right << std::setw(10)
			  << "nickname" << "|";
	std::cout << std::endl << std::endl;
	for (int i = 0; i < this->amount_of_contacts; i++)
	{
		std::cout << "\t      |";
		std::cout << std::right << std::setw(10)
				  << i + 1 << "|";
		this->contact_list[i].printContact();
	}
	display_book_bottom(this->amount_of_contacts);
			  
	std::string input;
	int num;

	while (std::cin.good())
	{
		std::cout << "	▖ENTER index TO SEARCH: ";
		std::getline(std::cin, input);

		if (!std::cin.good())
			return(display_forced_exit());
		if (!isdigit(input[0]) || input.length() > 1)
		{
			display_invalid_input(SEARCH);
			continue;
		}

		// Extracts and parses characters sequentially from the stream
		// to interpret them as the representation of a value of the proper type
		std::istringstream(input) >> num;

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

	std::cout << "\n	DISPLAYING CONTACT No" << num << "\n\n";
	this->contact_list[num - 1].displayInfo();

	return;
}

void PhoneBook::closeBook(void)
{
	std::cout << std::endl << "	════┈┈EXIT┈┈════" << std::endl << std::endl;
	return;
}
