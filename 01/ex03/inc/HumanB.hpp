/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/21 14:43:09 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "Weapon.hpp"

// -->┊( HUMAN B )┊.´-★☆★

class HumanB
{
public:
	HumanB(std::string name);  // constructor
	~HumanB(void); // destructor

	void attack( void ) const;
	void setWeapon(Weapon weapon);

private:
	std::string _name;
	Weapon _weapon;
	
};

