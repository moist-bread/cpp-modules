/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/13 11:18:54 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << CYN ">>┈┈┈>   NOW IT'S WEIRD! 🔫🌱";
	std::cout << DEF << std::endl << std::endl;
	std::cout << BBLU "what have we done...";
	std::cout << DEF << std::endl << std::endl;
	
	ScavTrap a;
	ClapTrap b("bert");
	ScavTrap c("clyde");
	FragTrap d("droid");
	DiamondTrap e("jake");
	DiamondTrap f;
	
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << d;
	std::cout << e;
	std::cout << f;
	
	d.highFivesGuys();
	b.attack("clyde");
	c.takeDamage(20);
	c.beRepaired(10);
	
	e.attack("bert");
	b.takeDamage(20);
	f.attack("bert");
	b.takeDamage(20);
	e.attack("bert");
	b.takeDamage(20);
	f.attack("bert");
	b.takeDamage(20);
	
	b.beRepaired(10);
	e.whoAmI();
	f.whoAmI();
	
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << d;
	std::cout << e;
	std::cout << f;
	return (0);
}
