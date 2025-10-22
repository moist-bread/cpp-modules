/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/22 16:19:46 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << GRN << "[ " << this->_name << " ]";
	std::cout << " the HumanB ";
	std::cout << UCYN << "has been born";
	std::cout << DEF << std::endl;
	return;
}

HumanB::~HumanB(void)
{
	std::cout << GRN << "[ " << this->_name << " ]";
	std::cout << " the HumanB ";
	std::cout << URED << "died (rip)";
	std::cout << DEF << std::endl;
	return;
}

void HumanB::setWeapon(Weapon &weapon)
{
	std::cout << MAG << "setting new weapon: ";
	if (!this->_weapon)
		std::cout << GRN << "previously empty handed but now holding a ";
	else
		std::cout << GRN << "the previous " << _weapon->getType() << "was replaced by a ";
	std::cout << BLU << weapon.getType();
	this->_weapon = &weapon;
	std::cout << DEF << std::endl;
	return ;
}

void HumanB::attack(void) const
{
	std::cout << GRN << this->_name;
	std::cout << MAG << " attacks with their ";
	if (!this->_weapon)
		std::cout << BLU << "knowledge";
	else
		std::cout << BLU << _weapon->getType();
	std::cout << DEF << std::endl;
	return;
}