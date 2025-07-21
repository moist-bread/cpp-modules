/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/21 14:14:14 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

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
			return(display_forced_exit(), 0);
		else
			display_incorrect_command(input);
	}
	return (0);
}
