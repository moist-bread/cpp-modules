/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/22 22:55:10 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << BLK GRNB "[ " << this->name << " ]";
	std::cout << GRN " the Zombie ";
	std::cout << UCYN "emerges from the ground";
	std::cout << DEF << std::endl;
	return;
}

Zombie::Zombie(std::string birth_name): name(birth_name)
{
	std::cout << BLK GRNB "[ " << this->name << " ]";
	std::cout << GRN " the Zombie ";
	std::cout << UCYN "emerges from the ground";
	std::cout << DEF << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << BLK GRNB "[ " << this->name << " ]";
	std::cout << GRN " the Zombie ";
	std::cout << URED "has become dead-dead";
	std::cout << DEF << std::endl;
	return;
}

void Zombie::set_name(const std::string name )
{
	this->name = name;
	return ;
}


void Zombie::announce( void )
{
	std::cout << GRN << this->name << ": ";
	std::cout << MAG "BraiiiiiiinnnzzzZ...";
	std::cout << DEF << std::endl;
	return ;
}
