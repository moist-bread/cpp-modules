/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/24 19:42:14 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

//-‵,┊ color defines
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define BMAG "\e[1;35m"
#define DEF "\e[0m"

int main(void)
{
	std::cout << std::endl;
	std::cout << MAG ">>┈┈┈>   HI THIS IS BRAIN 🧠";
	std::cout << DEF << std::endl;

	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << DEF << std::endl;
	std::cout << "The memory address of the string variable: " MAG << &string;
	std::cout << DEF << std::endl;
	std::cout << "The memory address held by stringPTR:      " MAG << stringPTR;
	std::cout << DEF << std::endl;
	std::cout << "The memory address held by stringREF:      " MAG << &stringREF;
	std::cout << DEF << std::endl << std::endl;

	std::cout << DEF << std::endl;
	std::cout << "The value of the string variable:          " BLU << string;
	std::cout << DEF << std::endl;
	std::cout << "The value pointed to by stringPTR:         " BLU << *stringPTR;
	std::cout << DEF << std::endl;
	std::cout << "The value pointed to by stringREF:         " BLU << stringREF;
	std::cout << DEF << std::endl;

	return (0);
}
