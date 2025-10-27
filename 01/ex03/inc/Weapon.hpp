/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/27 14:39:46 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include <iostream>
#include <string>

//-‵,┊ color defines
#define GRN "\e[0;32m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define URED "\e[4;31m"
#define UCYN "\e[4;36m"
#define DEF "\e[0m"

// -->┊( WEAPON )┊.´-★☆★

class Weapon
{
public:
	Weapon(void);  // default constructor
	Weapon(std::string weapon_type);  // constructor
	~Weapon(void); // destructor

	const std::string& getType(void) const;
	void setType(std::string new_value);

private:
	std::string type;
};
