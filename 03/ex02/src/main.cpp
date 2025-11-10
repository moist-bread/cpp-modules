/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/10 17:51:23 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << CYN ">>┈┈┈>   REPETITIVE WORK 🔫🌱";
	std::cout << DEF << std::endl << std::endl;
	std::cout << BBLU "a long lost relative has appeared";
	std::cout << DEF << std::endl << std::endl;
	
	ScavTrap a;
	ClapTrap b("bert");
	ScavTrap c("clyde");
	FragTrap d("droid");
	
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << d;
	
	d.highFivesGuys();
	d.highFivesGuys();
	d.highFivesGuys();
	d.highFivesGuys();
	b.attack("clyde");
	c.takeDamage(20);
	c.beRepaired(10);
	
	a.attack("bert");
	b.takeDamage(20);
	d.attack("bert");
	b.takeDamage(20);
	a.attack("bert");
	b.takeDamage(20);
	d.attack("bert");
	b.takeDamage(20);
	
	b.beRepaired(10);
	
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << d;
	return (0);
}
