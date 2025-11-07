/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/07 15:38:50 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "ClapTrap.hpp"

// -->┊( SCAVTRAP )┊.´-★☆★

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);					  // default constructor
	ScavTrap(std::string name);		  // name constructor
	ScavTrap(ScavTrap const &source); // copy constructor
	~ScavTrap(void);				  // destructor

	ScavTrap &operator=(ScavTrap const &source); // copy assignment operator overload

	// actions
	void attack(const std::string &target);
	void guardGate(void);
};

std::ostream &operator<<(std::ostream &out, ScavTrap const &source);
