/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:09:36 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/21 10:36:04 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

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
	std::cout << std::endl << std::endl;
	std::cout << "\t┈┈┈┈┈INVALID┈COMMAND┈┈┈┈┈" << std::endl << std::endl;
	std::cout << "\t\"" << input << "\" is not a valid input" << std::endl;
	std::cout << "\t" << "the valid commands are: \"ADD\", \"SEARCH\" or \"EXIT\"\n";
	std::cout << std::endl << std::endl;

}
