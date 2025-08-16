/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/08/16 10:43:30 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.class.hpp"

static void display_argc(void);
static void display_banner(void);
static void display_commands(void);

int main(int argc, char **argv)
{
	PhoneBook book;
	std::string input;

	(void)argv;
	if (argc != 1)
		return (display_argc(), 2);
	display_banner();
	display_commands();
	while (std::cin.good())
	{
		std::cout << "	▖ENTER YOUR COMMAND: ";
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			book.addContact();
		else if (input.compare("SEARCH") == 0)
			book.searchBook();
		else if (input.compare("EXIT") == 0)
			return (book.closeBook(), 0);
		else if (!std::cin.good())
			return (display_forced_exit(), 0);
		else
			display_incorrect_command(input);
	}
	return (0);
}

static void display_argc(void)
{
	std::cout << std::endl << std::endl;
	std::cout << "\n\t════┈┈ the phonebook only opens in silence ┈┈════";
	std::cout << std::endl << std::endl;
}

static void display_banner(void)
{
	std::cout << std::endl << std::endl;
	std::cout << "\t░█▀█░█░█░█▀█░█▀█░█▀▀░█▀▄░█▀█░█▀█░█░█" << std::endl;
	std::cout << "\t░█▀▀░█▀█░█░█░█░█░█▀▀░█▀▄░█░█░█░█░█▀▄ ░  ░ ░" << std::endl;
	std::cout << "\t░▀░░░▀░▀░▀▀▀░▀░▀░▀▀▀░▀▀░░▀▀▀░▀▀▀░▀░▀░  ░░" << std::endl;
}

static void display_commands(void)
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
	std::cout << "	the comand you entered is not a valid input" << std::endl;
	std::cout << "	the valid commands are: \"ADD\", \"SEARCH\" or \"EXIT\"\n";
	std::cout << std::endl << std::endl;

}

void display_forced_exit(void)
{
	std::cout << std::endl << std::endl;
	std::cout << "\n	════┈┈ forced exit ┈┈════";
	std::cout << std::endl << std::endl;
}
