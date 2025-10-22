/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/22 22:52:28 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << GRN "[ type-less ]";
	std::cout << " Weapon ";
	std::cout << UCYN "has been created";
	std::cout << DEF << std::endl;
	return;
}

Weapon::Weapon(std::string weapon_type): type(weapon_type)
{
	std::cout << GRN "[ " << this->type << " ]";
	std::cout << " Weapon ";
	std::cout << UCYN "has been created";
	std::cout << DEF << std::endl;
	return;
}

Weapon::~Weapon(void)
{
	std::cout << GRN "[ " << this->type << " ]";
	std::cout << " Weapon ";
	std::cout << URED "has become scrap";
	std::cout << DEF << std::endl;
	return;
}

const std::string& Weapon::getType( void ) const
{
	return (this->type);
}

void Weapon::setType( std::string new_value )
{
	std::cout << MAG "setting new type: ";
	std::cout << GRN << this->type << " is now a ";
	std::cout << BLU << new_value;
	this->type = new_value;
	std::cout << DEF << std::endl;
	return ;
}
