/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/04 12:38:43 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include <iostream>
#include <cmath>

//-‵,┊ color defines

#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"

#define URED "\e[4;31m"
#define UYEL "\e[4;33m"
#define UBLU "\e[4;34m"
#define UMAG "\e[4;35m"
#define UCYN "\e[4;36m"

#define DEF "\e[0m"

// -->┊( CLAPTRAP )┊.´-★☆★

class ClapTrap
{
public:
	ClapTrap(void);						// default constructor
	ClapTrap(std::string name);			// name constructor
	ClapTrap(ClapTrap const &source);	// copy constructor
	~ClapTrap(void);					// destructor

	ClapTrap &operator=(ClapTrap const &source); // copy assignment operator overload

	// getters
	std::string get_name(void) const;
	int get_hit_pt(void) const;
	int get_energy_pt(void) const;
	int get_attack_dm(void) const;
	
	// setters
	void set_name(std::string value);
	void set_hit_pt(int value);
	void set_energy_pt(int value);
	void set_attack_dm(int value);

	// actions
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
		
private:
	std::string _name;
	int _hit_pt;
	int _energy_pt;
	int _attack_dm;
};

std::ostream &operator<<(std::ostream &out, ClapTrap const &source);
