/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/21 14:25:41 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << DEF << GRN << "the HumanA ";
	std::cout << UCYN << "HumanA constructor";
	std::cout << DEF << std::endl;
	return;
}

HumanA::~HumanA(void)
{
	std::cout << BLK << GRNB << "[ " << this->_name << " ]";
	std::cout << DEF << GRN << " the HumanA ";
	std::cout << URED << "HumanA destructor";
	std::cout << DEF << std::endl;
	return;
}

void HumanA::attack( void ) const
{
	std::cout << GRN << this->_name;
	std::cout << MAG << " attacks with their ";
	std::cout << BLU << this->_weapon.getType();
	std::cout << DEF << std::endl;
	return ;
}
