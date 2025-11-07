/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/04 15:48:30 by rduro-pe         ###   ########.fr       */
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
	std::cout << MAG "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	set_name(source.get_name());
	set_hit_pt(source.get_hit_pt());
	set_energy_pt(source.get_energy_pt());
	set_attack_dm(source.get_attack_dm());
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

void ClapTrap::set_name(std::string value)
{
	_name = value;
}

void ClapTrap::set_hit_pt(int value)
{
	_hit_pt = value;
}

void ClapTrap::set_energy_pt(int value)
{
	_energy_pt = value;
}

void ClapTrap::set_attack_dm(int value)
{
	_attack_dm = value;
}

void ClapTrap::attack(const std::string &target)
{
	if (get_hit_pt() < 1 || get_energy_pt() < 1)
	{
		std::cout << "ClapTrap " << get_name() << " was unable to attack" << std::endl;
		return;
	}
	set_energy_pt(get_energy_pt() - 1);
	std::cout << "ClapTrap " << get_name() << " attacks " << target;
	std::cout << ", causing " << get_attack_dm() << " points of damage!" << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount > 0)
		set_hit_pt(get_hit_pt() - amount);
	std::cout << "ClapTrap " << get_name() << " was hit and took ";
	std::cout << amount << " points of damage :(" << std::endl;
	std::cout << "leaving " << get_name() << " with " << get_hit_pt() << " HIT POINTS" << std::endl;
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
		set_hit_pt(get_hit_pt() + amount);
	set_energy_pt(get_energy_pt() - 1);
	std::cout << "ClapTrap " << get_name() << " was repared and has restored ";
	std::cout << amount << " hit points :)" << std::endl;
	std::cout << "leaving " << get_name() << " with " << get_hit_pt() << " HIT POINTS" << std::endl;
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
