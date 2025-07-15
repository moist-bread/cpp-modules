/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/15 18:18:02 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

int main(int argc, char **argv)
{
	PhoneBook book;
	std::string input;

	(void)argv;
	if (argc != 1)
		return (std::cout << "the book only opens for those who are worthy" << std::endl, 2);
	while (std::cin.good())
	{
		std::cout << "enter your command: ";
		std::cin >> input;
		if (input.compare("ADD") == 0)
			book.addContact();
		else if (input.compare("SEARCH") == 0)
			book.searchBook();
		else if (input.compare("EXIT") == 0)
			return (book.closeBook(), 0);
		else if (!std::cin.good())
			std::cout << "\nbyebyeeee\n";
		else
			std::cout << "\"" << input
					  << "\" is not a valid input\n"
					  << "we only accept \"ADD\", \"SEARCH\" or \"EXIT\"\n";
	}
	return (0);
}
