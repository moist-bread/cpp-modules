/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/22 16:08:19 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl(void)
{
	/* std::cout << GRN "Oh no... ";
	std::cout << UCYN "Harl showed up...";
	std::cout << DEF << std::endl; */
	return;
}

Harl::~Harl(void)
{
	/* std::cout << GRN "Hurray! ";
	std::cout << URED "Harl is finally gone!";
	std::cout << DEF << std::endl; */
	return;
}

void Harl::complain( std::string level )
{
	std::string default_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	
	for (i = 0; i < 4; i++)
	{
		if (level == default_levels[i])
		{
			std::cout << "["<< level <<"] " << std::endl;
			break;
		}
	}

	// using __attribute__ to indicate to the compiler that
	// what's happening is intention as to not get a comp error
	switch (i)
	{
		case 0:
			debug();
			__attribute__ ((fallthrough));
		case 1:
			info();
			__attribute__ ((fallthrough));
		case 2:
			warning();
			__attribute__ ((fallthrough));
		case 3:
			error();
			break;
		default:
			std::cout << CYN "[ Probably complaining about insignificant problems ]";
			std::cout << DEF << std::endl;
			break;
	}
	return ;
}

void Harl::debug( void )
{
	std::cout << GRN "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup ";
	std::cout << "burger. I really do!";
	std::cout << DEF << std::endl;
	return ;
}

void Harl::info( void )
{
	std::cout << YEL "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn't be asking for more!";
	std::cout << DEF << std::endl;
	return ;
}


void Harl::warning( void )
{
	std::cout << MAG "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years, ";
	std::cout << "whereas you started working here just last month.";
	std::cout << DEF << std::endl;
	return ;
}

void Harl::error( void )
{
	std::cout << RED "This is unacceptable! ";
	std::cout << " I want to speak to the manager now.";
	std::cout << DEF << std::endl;
	return ;
}
