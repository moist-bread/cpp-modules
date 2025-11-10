/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/10 17:01:20 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << CYN ">>┈┈┈>   AAAAAND... OPEN! 🔫🌱";
	std::cout << DEF << std::endl << std::endl;
	std::cout << BBLU "a fake fight between fellow robots";
	std::cout << DEF << std::endl << std::endl;
	
	ClapTrap a;
	ClapTrap b("bert");
	ClapTrap c("clyde");
	
	std::cout << a;
	std::cout << b;
	std::cout << c;
	
	b.attack("clyde");
	c.takeDamage(0);
	c.beRepaired(0);
	a.attack("bert");
	b.takeDamage(0);
	a.attack("bert");
	b.takeDamage(0);
	a.attack("bert");
	b.takeDamage(0);
	a.attack("bert");
	b.takeDamage(0);
	
	std::cout << a;
	std::cout << b;
	std::cout << c;
	
	return (0);
}
