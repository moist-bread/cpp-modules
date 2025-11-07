/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/07 17:28:05 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	set_hit_pt(100);
	set_energy_pt(50);
	set_attack_dm(20);
	std::cout << GRN "the ScavTrap named [ ";
	std::cout << get_name() << " ] ";
	std::cout << UCYN "has been constructed";
	std::cout << DEF << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name)
{
	set_name(name);
	set_hit_pt(100);
	set_energy_pt(50);
	set_attack_dm(20);
	std::cout << GRN "the ScavTrap named [ ";
	std::cout << get_name() << " ] ";
	std::cout << UCYN "has been constructed";
	std::cout << DEF << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &source)
{
	*this = source;
	std::cout << GRN "the ScavTrap named [ ";
	std::cout << get_name() << " ] ";
	std::cout << UYEL "has been copy created";
	std::cout << DEF << std::endl;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << GRN "the ScavTrap named [ ";
	std::cout << get_name() << " ] ";
	std::cout << URED "has been scrapped for parts";
	std::cout << DEF << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &source)
{
	std::cout << YEL "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	if (this != &source)
	{
		set_name(source.get_name());
		set_hit_pt(source.get_hit_pt());
		set_energy_pt(source.get_energy_pt());
		set_attack_dm(source.get_attack_dm());
	}
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (get_hit_pt() < 1 || get_energy_pt() < 1)
	{
		std::cout << BLU "ScavTrap " << get_name() << " was unable to attack" DEF << std::endl;
		return;
	}
	set_energy_pt(get_energy_pt() - 1);
	std::cout << BLU "ScavTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << get_attack_dm() << " points of damage!" DEF << std::endl;
	return;
}

void ScavTrap::guardGate(void)
{
	if (get_hit_pt() < 1 || get_energy_pt() < 1)
	{
		std::cout << "ScavTrap " << get_name() << " was unable to gatekeep" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << get_name() << " is now in gate keeper mode ";
	return;
}

std::ostream &operator<<(std::ostream &out, ScavTrap const &source)
{
	out << std::endl;
	out << "╆───────────────░────────░───────░───── -" << std::endl;
	out << "╵" << std::endl;
	out << "╵   " << "ScavTrap" << std::endl;
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
