/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/04 18:41:27 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << CYN ">>┈┈┈>   SERENA, MY LOVE! 🔫🌱";
	std::cout << DEF << std::endl << std::endl;
	
	ClapTrap a;
	ClapTrap b("carl0s");
	ScavTrap c("carl0oooos");
	FragTrap d;
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << d;
	b.attack("carlitos (o mau)");
	c.attack("carlitos (o mau)");
	b.takeDamage(5);
	b.beRepaired(2);
	d.highFivesGuys();
	std::cout << b;
	return (0);
}
