/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/21 14:25:59 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "Weapon.hpp"

// -->┊( HUMAN A )┊.´-★☆★

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);  // constructor
	~HumanA(void); // destructor

	void attack( void ) const;

private:
	std::string _name;
	Weapon &_weapon;
	
};
