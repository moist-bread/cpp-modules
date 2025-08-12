/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/08/12 22:38:24 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main(void)
{
	std::cout << std::endl;
	std::cout << BMAG << "ZOMBIES FROM STACK VS. HEAP...";
	std::cout << DEF << std::endl;
	std::cout << MAG << "plants vs. zombies edition";
	std::cout << DEF << std::endl << std::endl;
	
	// demo of heap Zombies
	std::cout << MAG << ">>┈┈┈>   HEAP Zombies 🧠";

	std::cout << DEF << std::endl << std::endl;
	std::cout << BLU << "using functions new and delete:";
	std::cout << DEF << std::endl;
	Zombie *Engineer = new Zombie("Engineer");
	delete Engineer;
	
	std::cout << std::endl;
	std::cout << BLU << "using new and clear() and delete on a vector iterator of All-Star:";
	std::cout << DEF << std::endl;
	std::string CDBNames[] = {"All-Star (1)", "All-Star (2)", "All-Star (3)"};
	std::vector<Zombie> *AllStar = new std::vector<Zombie>(&CDBNames[0], &CDBNames[3]);
	AllStar->clear();
	delete AllStar;

	std::cout << std::endl;
	std::cout << BLU << "newZombie function:";
	std::cout << DEF << std::endl;
	Zombie *CaptainDeadbeard = newZombie("Captain Deadbeard");
	delete CaptainDeadbeard;
	std::cout << std::endl << std::endl;
	
	// demo of stack Zombies
	std::cout << MAG << ">>┈┈┈>   STACK Zombies 🧠";
	
	std::cout << DEF << std::endl << std::endl;
	std::cout << BLU << "variable declaration of a Foot Soldier:";
	std::cout << DEF << std::endl;
	Zombie FootSoldier("Foot Soldier");
	
	std::cout << std::endl;
	std::cout << BLU << "array of Imps:";
	std::cout << DEF << std::endl;
	Zombie Imp[3] = { Zombie("Imp (1)"), Zombie("Imp (2)"), Zombie("Imp (3)") };

	std::cout << std::endl;
	std::cout << BLU << "vector iterator of Super_Brainz:";
	std::cout << DEF << std::endl;
	std::string SBNames[] = {"Super Brainz (1)", "Super Brainz (2)", "Super Brainz (3)"};
	std::vector<Zombie> Super_Brainz(&SBNames[0], &SBNames[3]);

	std::cout << std::endl;
	std::cout << BLU << "randomChump function:";
	std::cout << DEF << std::endl;
	randomChump("Scientist");
	
	std::cout << std::endl << std::endl;
	std::cout << "the memory used for Stack Zombies is automatic";
	std::cout << std::endl;
	std::cout << "and limited by the scope of the function";
	std::cout << std::endl;
	std::cout << "whilst heap Zombies can be made a new";
	std::cout << std::endl;
	std::cout << "and need to be deleted at will";
	std::cout << DEF << std::endl << std::endl << std::endl;

	return (0);
}
