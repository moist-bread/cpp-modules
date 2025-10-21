/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/21 14:43:25 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << DEF << GRN << "the HumanB ";
	std::cout << UCYN << "HumanB constructor";
	std::cout << DEF << std::endl;
	return;
}

HumanB::~HumanB(void)
{
	std::cout << BLK << GRNB << "[ " << this->_name << " ]";
	std::cout << DEF << GRN << " the HumanB ";
	std::cout << URED << "HumanB destructor";
	std::cout << DEF << std::endl;
	return;
}

void HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
	std::cout << MAG << "setting weapon to a new one ... ";
	std::cout << GRN << this->_weapon.getType() << " is the new weapon";
	std::cout << DEF << std::endl;
	return ;
}

void HumanB::attack(void) const
{
	std::cout << GRN << this->_name;
	std::cout << MAG << " attacks with their ";
	std::cout << BLU << this->_weapon.getType();
	std::cout << DEF << std::endl;
	return;
}