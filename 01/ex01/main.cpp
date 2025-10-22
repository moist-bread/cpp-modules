/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/22 22:53:51 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
	std::cout << std::endl;
	std::cout << BMAG "THE ZOMBIE HORDE WANTS MOAR BRAINZ!...";
	std::cout << DEF << std::endl;
	std::cout << MAG "plants vs. zombies edition";
	std::cout << DEF << std::endl << std::endl;
	
	std::cout << MAG ">>┈┈┈>   Horde Function 🧠";
	
	std::cout << DEF << std::endl << std::endl;
	
	Zombie *horde;
	int N = 10;
	
	horde = zombieHorde(N, "linda");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	
	return (0);
}
