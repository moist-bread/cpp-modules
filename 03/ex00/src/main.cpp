/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/31 18:04:58 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << CYN ">>┈┈┈>   AAAAAND... OPEN! 🔫🌱";
	std::cout << DEF << std::endl << std::endl;
	
	ClapTrap a;
	ClapTrap b("carl0s");
	std::cout << a;
	std::cout << b;
	b.attack("carlitos (o mau)");
	b.takeDamage(5);
	b.beRepaired(2);
	std::cout << b;
	return (0);
}
