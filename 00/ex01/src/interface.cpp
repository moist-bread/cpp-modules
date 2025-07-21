/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:09:36 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/21 18:46:27 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"


void display_argc(void)
{
	std::cout << std::endl << std::endl;
	std::cout << "\n\t════┈┈ the phonebook only opens in silence ┈┈════";
	std::cout << std::endl << std::endl;
}

void display_banner(void)
{
	std::cout << std::endl << std::endl;
	std::cout << "\t░█▀█░█░█░█▀█░█▀█░█▀▀░█▀▄░█▀█░█▀█░█░█" << std::endl;
	std::cout << "\t░█▀▀░█▀█░█░█░█░█░█▀▀░█▀▄░█░█░█░█░█▀▄ ░  ░ ░" << std::endl;
	std::cout << "\t░▀░░░▀░▀░▀▀▀░▀░▀░▀▀▀░▀▀░░▀▀▀░▀▀▀░▀░▀░  ░░" << std::endl;
}

void display_commands(void)
{
	std::cout << "\t╆───────────────────────────░─────────────░───────░─────╅" << std::endl;
	std::cout << "\t╵	 _ _  _ _  _ _  _  _  _| _			╵" << std::endl;
	std::cout << "\t╵	(_(_)| | || | |(_|| |(_|_\\		░	╵" << std::endl;
	std::cout << "\t╆     	════┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈════		░	╅" << std::endl;
	std::cout << "\t:							:" << std::endl;
	std::cout << "\t	▖ ADD :  save a new contact" << std::endl;
	std::cout << "\t:	▖ SEARCH:  display a specific contact		:" << std::endl;
	std::cout << "\t╆     							╅" << std::endl;
	std::cout << "\t╵	▖ EXIT						╵" << std::endl;
	std::cout << "\t╵							╵" << std::endl;
	std::cout << "\t╆───────────────────────────────────────────────░───░░──╅" << std::endl;
	std::cout << std::endl << std::endl;
}

void display_incorrect_command(std::string  input)
{
	std::cout << std::endl;
	std::cout << "	┈┈┈┈┈INVALID┈COMMAND┈┈┈┈┈" << std::endl << std::endl;
	std::cout << "	\"" << input << "\" is not a valid input" << std::endl;
	std::cout << "	the valid commands are: \"ADD\", \"SEARCH\" or \"EXIT\"\n";
	std::cout << std::endl << std::endl;

}

void display_forced_exit(void)
{
	std::cout << std::endl << std::endl;
	std::cout << "\n	════┈┈ forced exit ┈┈════";
	std::cout << std::endl << std::endl;
}

void display_invalid_input(int flag)
{
	std::cout << std::endl;
	std::cout << "	┈┈┈ INVALID┈INPUT: ";

	if (flag == FIRST_NAME || flag == LAST_NAME)
		std::cout << "non alphabetical character found";
	else if (flag == NICK_NAME || flag == SECRET)
		std::cout << "non ascii character found";
	else if (flag == PHONE_NUM)
		std::cout << "incorrectly formatted phone number";
	else if (flag == FULL)
		std::cout << "the valid options are: \"YES\" or \"NO\"";
	else if (flag == SEARCH)
		std::cout << "not a numeric value from 1 until 8";
	std::cout << std::endl << "	try again ...";
	std::cout << std::endl << std::endl;

}

void display_full_warn(void)
{
	std::cout << "	┈┈┈ WARNING: your PHONEBOOK is full" << std::endl;
	std::cout << "	by adding your oldest contact will be overwritten" << std::endl;
	std::cout << "	do you wish to proceed? YES or NO";
	std::cout << std::endl << std::endl;
}

void display_book_top(void)
{
	std::cout << "\t╆───────────────────────────░─────────────░───────░─────╅" << std::endl;
	std::cout << "\t╵	   .           .        .  			╵" << std::endl;
	std::cout << "\t╵	._ |_  _ ._  _ |_  _  _ ;_/		░	╵" << std::endl;
	std::cout << "\t╆	[_)[ )(_)[ )(/,[_)(_)(_)| \\			╅" << std::endl;
	std::cout << "\t:	|						:" << std::endl;
	std::cout << "\t     	════┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈════		 ░	" << std::endl;
	
}

void display_book_bottom(int n)
{
	std::cout << "\t:							:" << std::endl;
	std::cout << "\t╆     							╅" << std::endl;
	std::cout << "\t╵	════┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈════	 " << n << "/8		╵" << std::endl;
	std::cout << "\t╵							╵" << std::endl;
	std::cout << "\t╆───────────────────────────────────────────────░───░░──╅" << std::endl;
	std::cout << std::endl << std::endl;
}
