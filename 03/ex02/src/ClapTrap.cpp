/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/10 17:06:40 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("nameless"), _hit_pt(10), _energy_pt(10), _attack_dm(0)
{
	std::cout << GRN "the ClapTrap named [ ";
	std::cout << get_name() << " ] ";
	std::cout << UCYN "has been constructed";
	std::cout << DEF << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_pt(10), _energy_pt(10), _attack_dm(0)
{
	std::cout << GRN "the ClapTrap named [ ";
	std::cout << get_name() << " ] ";
	std::cout << UCYN "has been constructed";
	std::cout << DEF << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &source)
{
	*this = source;
	std::cout << GRN "the ClapTrap named [ ";
	std::cout << get_name() << " ] ";
	std::cout << UYEL "has been copy created";
	std::cout << DEF << std::endl;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << GRN "the ClapTrap named [ ";
	std::cout << get_name() << " ] ";
	std::cout << URED "has been scrapped for parts";
	std::cout << DEF << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &source)
{
	std::cout << YEL "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	if (this != &source)
	{
		_name = source.get_name();
		_hit_pt = source.get_hit_pt();
		_energy_pt = source.get_energy_pt();
		_attack_dm = source.get_attack_dm();
	}
	return (*this);
}

std::string ClapTrap::get_name(void) const
{
	return (_name);
}

int ClapTrap::get_hit_pt(void) const
{
	return (_hit_pt);
}

int ClapTrap::get_energy_pt(void) const
{
	return (_energy_pt);
}

int ClapTrap::get_attack_dm(void) const
{
	return (_attack_dm);
}

void ClapTrap::attack(const std::string &target)
{
	if (get_hit_pt() < 1 || get_energy_pt() < 1)
	{
		std::cout << "ClapTrap " << get_name() << " was unable to attack" << std::endl;
		return;
	}
	_energy_pt--;
	std::cout << BLU "ClapTrap " << get_name() << " attacks " << target;
	std::cout << ", causing " << get_attack_dm() << " points of damage!" DEF << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount > 0)
		_hit_pt -= amount;
	std::cout << MAG "ClapTrap " << get_name() << " was hit and took ";
	std::cout << amount << " points of damage :(" << std::endl;
	std::cout << "leaving " << get_name() << " with " << get_hit_pt() << " HIT POINTS" DEF << std::endl;
	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (get_hit_pt() < 1 || get_energy_pt() < 1)
	{
		std::cout << "ClapTrap " << get_name() << " was unable to repair itself" << std::endl;
		return;
	}
	if ((int)amount > 0)
		_hit_pt += amount;
	_energy_pt--;
	std::cout << GRN "ClapTrap " << get_name() << " was repared and has restored ";
	std::cout << amount << " hit points :)" << std::endl;
	std::cout << "leaving " << get_name() << " with " << get_hit_pt() << " HIT POINTS" DEF << std::endl;
	return;
}

std::ostream &operator<<(std::ostream &out, ClapTrap const &source)
{
	out << std::endl;
	out << "╆───────────────░────────░───────░───── -" << std::endl;
	out << "╵" << std::endl;
	out << "╵   " << "ClapTrap" << std::endl;
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
