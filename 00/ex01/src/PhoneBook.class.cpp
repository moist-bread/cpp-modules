/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/29 11:33:04 by rduro-pe         ###   ########.fr       */
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

/// @brief Asks for user input to create a new contact 
void PhoneBook::addContact(void)
{
	int idx;

	std::cout << std::endl << "	════┈┈ADD┈┈════" << std::endl << std::endl;
	if (this->amount_of_contacts == 8)
	{
		// -- phonebook is full, confirm to proceed
		_displayFullWarn();
		if (_recieveInput(NULL, FULL, "your choice") == false)
			return;
		for (size_t i = 0; i < 7; i++)
			this->contact_list[i] = this->contact_list[i + 1];
		idx = this->amount_of_contacts - 1;
	}
	else
		idx = this->amount_of_contacts;

	// -- ask for input to fill out contact
	if (!_recieveInput(&this->contact_list[idx], FIRST_NAME, "First Name"))
		return;
	if (!_recieveInput(&this->contact_list[idx], LAST_NAME, "Last Name"))
		return;
	if (!_recieveInput(&this->contact_list[idx], NICK_NAME, "Nickname"))
		return;
	if (!_recieveInput(&this->contact_list[idx], PHONE_NUM, "Phone Number"))
		return;
	if (!_recieveInput(&this->contact_list[idx], SECRET, "Darkest Secret"))
		return;

	if (this->amount_of_contacts < 8)
		this->amount_of_contacts++;
	std::cout << "\n	════┈┈ contact added successfully ┈┈════";
	std::cout << std::endl << std::endl;
	return;
}

void PhoneBook::_displayFullWarn(void) const
{
	std::cout << "	┈┈┈ WARNING: your PHONEBOOK is full" << std::endl;
	std::cout << "	by adding your oldest contact will be overwritten" << std::endl;
	std::cout << "	do you wish to proceed? YES or NO";
	std::cout << std::endl << std::endl;
}

/// @brief recieves input, validates it and processes it according to FLAG
/// @param contact contact currently being filled out or NULL
/// @param flag type of content being asked for
/// @param m message to display in the prompt
/// @return true on sucess, false on eof, fail or bad input
bool PhoneBook::_recieveInput(Contact *contact, int flag, std::string m)
{
	std::string input;

	while (std::cin.good())
	{
		std::cout << "	▓▒░ ENTER " << m << ": ";
		std::getline(std::cin, input);

		if (!std::cin.good()) // check for eof, fail or bad input
			return(display_forced_exit(), false);

		if (!_validateInput(input, flag))
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

/// @brief parses input according to FLAG
/// @param input previously written user input
/// @param flag type of content being asked for
/// @return true when valid, false when invalid
bool PhoneBook::_validateInput(std::string input, int flag) const
{
	if (input.empty())
		return (_displayInvalidInput(EMPTY), false);

	if (flag == FIRST_NAME || flag == LAST_NAME)
	{
		// only alpha
		for (size_t i = 0; input[i]; i++)
			if (!isalpha(input[i]))
				return (_displayInvalidInput(flag), false);
	}
	else if (flag == NICK_NAME || flag == SECRET)
	{
		// only ascii
		for (size_t i = 0; input[i]; i++)
			if (!isascii(input[i]))
				return (_displayInvalidInput(flag), false);
		if (flag == NICK_NAME)
		{
			// no spaces
			for (size_t i = 0; input[i]; i++)
			if (isspace(input[i]))
				return (_displayInvalidInput(flag), false);
		}
	}
	else if (flag == PHONE_NUM)
	{
		int idx;
		int sign = 0;
		
		// can start with +
		if (input[0] == '+')
			sign++;
		idx = sign;
		// afterwards can only be digits and between 3-16 in length
		if (!isdigit(input[idx]))
			return (_displayInvalidInput(flag), false);
		while (input[++idx])
			if (!isdigit(input[idx]) || idx >= 17)
				return (_displayInvalidInput(flag), false);
		if ((sign && idx < 5) || (!sign && idx < 3))
			return (_displayInvalidInput(flag), false);
	}
	else if (flag == FULL)
	{
		if (input.compare("YES") && input.compare("NO"))
			return (_displayInvalidInput(flag), false);
	}

	return (true);
}

void PhoneBook::_displayInvalidInput(int flag) const
{
	std::cout << std::endl;
	std::cout << "	┈┈┈ INVALID┈INPUT: ";

	// error message depending on FLAG
	switch (flag)
	{
	case FIRST_NAME:
	case LAST_NAME:
		std::cout << "should be only alphabetical characters";
		break;
	case NICK_NAME:
		std::cout << "should be only ascii but no spaces";
		break;
	case PHONE_NUM:
		std::cout << "incorrectly formatted phone number";
		break;
	case SECRET:
		std::cout << "should be only ascii characters";
		break;
	case FULL:
		std::cout << "the valid options are: \"YES\" or \"NO\"";
		break;
	case SEARCH:
		std::cout << "should be a numeric value from 1 until 8";
	}
	
	std::cout << std::endl << "	try again ...";
	std::cout << std::endl << std::endl;
	return ;
}

/// @brief shows the contents of the phonebook in a list and then a specified contact
void PhoneBook::searchBook(void) const
{
	std::cout << std::endl << "	════┈┈SEARCH┈┈════" << std::endl << std::endl;
	_displayBookTop();

	// in case of no contacts
	if (!this->amount_of_contacts) 
	{
		std::cout << "		PHONEBOOK IS EMPTY..." << std::endl;
		return(_displayBookBottom(this->amount_of_contacts));
	}

	// contact table header
	std::cout << std::endl << "\t      |";
	std::cout << std::right << std::setw(10) << "index" << "|";
	std::cout << std::right << std::setw(10) << "first name" << "|";
	std::cout << std::right << std::setw(10) << "last name" << "|";
	std::cout << std::right << std::setw(10) << "nickname" << "|";
	std::cout << std::endl << std::endl;

	// display a listing of all existing contacts
	for (int i = 0; i < this->amount_of_contacts; i++)
	{
		std::cout << "\t      |";
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		this->contact_list[i].printContact();
	}
	_displayBookBottom(this->amount_of_contacts);
	
	// get user index input
	int num = _inputContactIndex();
	if (num == -1)
		return (display_forced_exit());

	// display the specified contact
	std::cout << std::endl << std::endl;
	std::cout << "	════┈┈ displaying contact no " << num << " ┈┈════";
	std::cout << std::endl << std::endl;
	this->contact_list[num - 1].displayInfo();

	return;
}

void PhoneBook::_displayBookTop(void) const
{
	std::cout << "\t╆───────────────────────────░─────────────░───────░─────╅" << std::endl;
	std::cout << "\t╵	   .           .        .  			╵" << std::endl;
	std::cout << "\t╵	._ |_  _ ._  _ |_  _  _ ;_/		░	╵" << std::endl;
	std::cout << "\t╆	[_)[ )(_)[ )(/,[_)(_)(_)| \\			╅" << std::endl;
	std::cout << "\t:	|						:" << std::endl;
	std::cout << "\t     	════┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈════		 ░	" << std::endl;
	
}

void PhoneBook::_displayBookBottom(int n) const
{
	std::cout << "\t:							:" << std::endl;
	std::cout << "\t╆     							╅" << std::endl;
	std::cout << "\t╵	════┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈════	 " << n << "/8		╵" << std::endl;
	std::cout << "\t╵							╵" << std::endl;
	std::cout << "\t╆───────────────────────────────────────────────░───░░──╅" << std::endl;
	std::cout << std::endl << std::endl;
}

/// @brief asks for user input and parses the number according to contact amount
/// @return index inputted, -1 on eof, fail or bad input
int PhoneBook::_inputContactIndex(void) const
{
	std::string input;
	int num;

	while (std::cin.good())
	{
		std::cout << "	▓▒░ ENTER index TO SEARCH: ";
		std::getline(std::cin, input);

		if (!std::cin.good())
			return(-1);
		
		// checks if it's a digit
		if (!isdigit(input[0]) || input.length() > 1)
		{
			_displayInvalidInput(SEARCH);
			continue;
		}

		// checks if its within existing contacts
		num = std::atoi(input.c_str());
		if (num > this->amount_of_contacts || num < 1)
		{
			std::cout << std::endl;
			std::cout << "	┈┈┈ INVALID┈INPUT: ";
			std::cout << "\"" << num << "\" is out of bounds" << std::endl;
			std::cout << "	we only accept 1";
			if (this->amount_of_contacts > 1)
				std::cout << "-" << this->amount_of_contacts;
			std::cout << std::endl << "	try again ...";
			std::cout << std::endl << std::endl;
			continue;
		}
		
		break;
	}
	return (num);
}

/// @brief exits the program
void PhoneBook::closeBook(void)
{
	std::cout << std::endl << "	════┈┈EXIT┈┈════" << std::endl << std::endl;
	return;
}
