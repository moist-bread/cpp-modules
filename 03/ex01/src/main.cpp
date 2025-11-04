/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/04 14:07:43 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << CYN ">>┈┈┈>   SERENA, MY LOVE! 🔫🌱";
	std::cout << DEF << std::endl << std::endl;
	
	ClapTrap a;
	ClapTrap b("carl0s");
	ScavTrap c("carl0oooos");
	std::cout << a;
	std::cout << b;
	b.attack("carlitos (o mau)");
	b.takeDamage(5);
	b.beRepaired(2);
	std::cout << b;
	return (0);
}
