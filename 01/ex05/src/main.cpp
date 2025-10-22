/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/22 23:25:14 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(int argc, char **argv)
{
	std::cout << std::endl;
	std::cout << MAG ">>┈┈┈>   HARL 2.0 🍔";
	std::cout << DEF << std::endl << std::endl;
	
	std::cout << "Let's see what Harl has to say to us today";
	std::cout << std::endl << std::endl;
	
	Harl harl;
	
	std::cout << std::endl << std::endl;
	std::cout << BLU "normal tests:";
	
	std::cout << DEF << std::endl << std::endl;
	std::cout << "testing \"DEBUG\" complain";
	std::cout << std::endl;
	harl.complain("DEBUG");
	std::cout << DEF << std::endl << std::endl;

	std::cout << "testing \"INFO\" complain";
	std::cout << std::endl;
	harl.complain("INFO");
	std::cout << DEF << std::endl << std::endl;

	std::cout << "testing \"WARNING\" complain";
	std::cout << std::endl;
	harl.complain("WARNING");
	std::cout << DEF << std::endl << std::endl;

	std::cout << "testing \"ERROR\" complain";
	std::cout << std::endl;
	harl.complain("ERROR");
	std::cout << DEF << std::endl << std::endl;

	std::cout << "testing \"lorem ipsum\" complain";
	std::cout << std::endl;
	harl.complain("lorem ipsum");
	std::cout << DEF << std::endl << std::endl;
	
	if (argc != 1)
		std::cout << BLU "user input tests:" DEF << std::endl << std::endl;
	for (int i = 1; i < argc; i++)
	{	
		std::cout << "testing \"" << argv[i] << "\" complain";
		std::cout << std::endl;
		harl.complain(argv[i]);
		std::cout << DEF << std::endl << std::endl;
	}

	return (0);
}
