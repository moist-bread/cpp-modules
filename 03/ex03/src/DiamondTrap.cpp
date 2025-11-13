/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/13 14:04:54 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("nameless_clap_name"), FragTrap("nameless_clap_name"), ScavTrap("nameless_clap_name")
{
	_name = "nameless";
	_attack_dm = 30;
	std::cout << GRN "the DiamondTrap named [ ";
	std::cout << get_name() << " ] ";
	std::cout << UCYN "has been constructed";
	std::cout << DEF << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	_name = name;
	_attack_dm = 30;
	std::cout << GRN "the DiamondTrap named [ ";
	std::cout << this->_name << " ] ";
	std::cout << UCYN "has been constructed";
	std::cout << DEF << std::endl;
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const &source): ClapTrap(source), FragTrap(source), ScavTrap(source) 
{
	*this = source;
	std::cout << GRN "the DiamondTrap named [ ";
	std::cout << get_name() << " ] ";
	std::cout << UYEL "has been copy created";
	std::cout << DEF << std::endl;
	return;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << GRN "the DiamondTrap named [ ";
	std::cout << get_name() << " ] ";
	std::cout << URED "has been scrapped for parts";
	std::cout << DEF << std::endl;
	return;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &source)
{
	std::cout << YEL "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	if (this != &source)
	{
		this->_name = source._name;
		_name = source.get_name();
		_hit_pt = source.get_hit_pt();
		_energy_pt = source.get_energy_pt();
		_attack_dm = source.get_attack_dm();
	}
	return (*this);
}
void DiamondTrap::whoAmI(void)
{
	if (get_hit_pt() < 1 || get_energy_pt() < 1)
	{
		std::cout << "DiamondTrap " << get_name() << " was too stunned to speak" << std::endl;
		return;
	}
	std::cout << CYN "I'm- I'm a DiamondTrap, and my name is [ ";
	std::cout << this->_name << " ] " DEF << std::endl;
	return;
}

std::ostream &operator<<(std::ostream &out, DiamondTrap const &source)
{
	out << std::endl;
	out << "╆───────────────░────────░───────░───── -" << std::endl;
	out << "╵" << std::endl;
	out << "╵   " << "DiamondTrap" << std::endl;
	out << "╵   " << source.get_name() << std::endl;
	out << "╆" << std::endl;
	out << ":   " MAG "▖ HIT POINTS    : " DEF << source.get_hit_pt() << std::endl;
	out << "╆   " GRN "▖ ENERGY POINTS : " DEF << source.get_energy_pt() << std::endl;
	out << "╵   " BLU "▖ ATTACK DAMAGE : " DEF << source.get_attack_dm() << std::endl;
	out << "╵" << std::endl;
	out << "╆──────────────────────────────░───░░── -" << std::endl;
	out << std::endl;

	return (out);
}
