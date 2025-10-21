/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/21 14:32:59 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << DEF << GRN << "the Weapon ";
	std::cout << UCYN << "weapon constructor";
	std::cout << DEF << std::endl;
	return;
}

Weapon::Weapon(std::string weapon_type): type(weapon_type)
{
	std::cout << DEF << GRN << "the Weapon ";
	std::cout << UCYN << "weapon constructor";
	std::cout << DEF << std::endl;
	return;
}

Weapon::~Weapon(void)
{
	std::cout << BLK << GRNB << "[ " << this->type << " ]";
	std::cout << DEF << GRN << " the Weapon ";
	std::cout << URED << "weapon destructor";
	std::cout << DEF << std::endl;
	return;
}

const std::string& Weapon::getType( void ) const
{
	return (this->type);
}

void Weapon::setType( std::string new_value )
{
	this->type = new_value;
	std::cout << MAG << "setting type to new value... ";
	std::cout << GRN << this->type << " is the new type";
	std::cout << DEF << std::endl;
	return ;
}
