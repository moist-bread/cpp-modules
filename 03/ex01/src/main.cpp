/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/10 17:05:22 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << CYN ">>┈┈┈>   SERENA, MY LOVE! 🔫🌱";
	std::cout << DEF << std::endl << std::endl;
	std::cout << BBLU "robots from the same family meet eachother";
	std::cout << DEF << std::endl << std::endl;
	
	ScavTrap a;
	ClapTrap b("bert");
	ScavTrap c("clyde");
	
	std::cout << a;
	std::cout << b;
	std::cout << c;
	
	b.attack("clyde");
	c.takeDamage(20);
	c.beRepaired(10);
	
	a.attack("bert");
	b.takeDamage(20);
	a.attack("bert");
	b.takeDamage(20);
	a.attack("bert");
	b.takeDamage(20);
	a.attack("bert");
	b.takeDamage(20);
	
	b.beRepaired(10);
	
	std::cout << a;
	std::cout << b;
	std::cout << c;
	
	return (0);
}
