/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/22 16:28:10 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"
#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << GRN << ">>┈┈┈>   UNNECESSARY VIOLENCE 🔫🌱";
	std::cout << DEF << std::endl;
	std::cout << MAG << "plants vs. zombies edition";
	std::cout << DEF << std::endl << std::endl << std::endl;
	
	std::cout << BLU << "\"HumanA\" demonstration:";
	
	std::cout << DEF << std::endl << std::endl;
	std::cout << "the HumanA needs a weapon to be constructed";
	std::cout << std::endl;
	std::cout << "so to have a HumanA you'll first need a weapon";
	std::cout << DEF << std::endl;
	
	Weapon weapon_a = Weapon("Z-1 Assault Blaster");
	
	HumanA foot_soldier("Foot Soldier", weapon_a);
	foot_soldier.attack();

	std::cout << DEF << std::endl;
	std::cout << "afterwards you cannot change weapon";
	std::cout << std::endl;
	std::cout << "but you can change it's type";
	std::cout << DEF << std::endl;
	
	weapon_a.setType("Camo Surprise");
	foot_soldier.attack();
	
	std::cout << DEF << std::endl;
	std::cout << "this works because the HumanA weapon is";
	std::cout << std::endl;
	std::cout << "a reference to the weapon";
	std::cout << DEF << std::endl << std::endl << std::endl;
	
	
	std::cout << BLU << "\"HumanB\" demonstration:";
	
	std::cout << DEF << std::endl << std::endl;
	std::cout << "unlike HumanA the HumanB can be without a weapon";
	std::cout << std::endl;
	std::cout << "and later be assigned one";
	std::cout << DEF << std::endl;
	
	Weapon goo_blaster = Weapon("Goo Blaster");
	
	HumanB scientist("Scientist");
	scientist.setWeapon(goo_blaster);
	scientist.attack();
	
	std::cout << DEF << std::endl;
	std::cout << "because of that the weapon can't be a reference";
	std::cout << std::endl;
	std::cout << "which needs to be assigned on declaration";
	std::cout << std::endl;
	std::cout << "so instead, it can be a pointer";
	std::cout << DEF << std::endl;
	
	goo_blaster.setType("Chemical Beaker Blaster");
	scientist.attack();
	std::cout << DEF << std::endl << std::endl;

	return (0);
}
