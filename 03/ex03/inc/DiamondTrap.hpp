/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/04 18:51:07 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// -->┊( DIAMONDTRAP )┊.´-★☆★

class DiamondTrap: public FragTrap, public ScavTrap
{
public:
	DiamondTrap(void);						// default constructor
	DiamondTrap(std::string name);			// name constructor
	DiamondTrap(DiamondTrap const &source);	// copy constructor
	~DiamondTrap(void);					// destructor

	DiamondTrap &operator=(DiamondTrap const &source); // copy assignment operator overload

private:
	std::string _name;
};

std::ostream &operator<<(std::ostream &out, DiamondTrap const &source);
