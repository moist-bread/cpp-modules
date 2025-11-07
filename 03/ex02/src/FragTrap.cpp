/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/07 17:17:42 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(void)
{
	set_hit_pt(100);
	set_energy_pt(100);
	set_attack_dm(30);
	std::cout << GRN "the FragTrap named [ ";
	std::cout << get_name() << " ] ";
	std::cout << UCYN "has been constructed";
	std::cout << DEF << std::endl;
	return;
}

FragTrap::FragTrap(std::string name)
{
	set_name(name);
	set_hit_pt(100);
	set_energy_pt(100);
	set_attack_dm(30);
	std::cout << GRN "the FragTrap named [ ";
	std::cout << get_name() << " ] ";
	std::cout << UCYN "has been constructed";
	std::cout << DEF << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &source)
{
	*this = source;
	std::cout << GRN "the FragTrap named [ ";
	std::cout << get_name() << " ] ";
	std::cout << UYEL "has been copy created";
	std::cout << DEF << std::endl;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << GRN "the FragTrap named [ ";
	std::cout << get_name() << " ] ";
	std::cout << URED "has been scrapped for parts";
	std::cout << DEF << std::endl;
	return;
}

FragTrap &FragTrap::operator=(FragTrap const &source)
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

void FragTrap::highFivesGuys(void)
{
	if (get_hit_pt() < 1 || get_energy_pt() < 1)
	{
		std::cout << "FragTrap " << get_name() << " was unable to hand out high fives" << std::endl;
		return;
	}
	std::cout << "FragTrap " << get_name() << " is high fiving everyone";
	return;
}

std::ostream &operator<<(std::ostream &out, FragTrap const &source)
{
	out << std::endl;
	out << "╆───────────────░────────░───────░───── -" << std::endl;
	out << "╵" << std::endl;
	out << "╵   " << "FragTrap" << std::endl;
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
