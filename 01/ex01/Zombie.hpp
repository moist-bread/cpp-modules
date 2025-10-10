/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/06 13:19:17 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

//-‵,┊ needed libs by class
#include <new>
#include <iostream>
#include <string>

//-‵,┊ color defines
#define BLK "\e[0;30m"
#define GRN "\e[0;32m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define BMAG "\e[1;35m"
#define URED "\e[4;31m"
#define UCYN "\e[4;36m"
#define GRNB "\e[42m"
#define DEF "\e[0m"


// -->┊( ZOMBIE )┊.´-★☆★

class Zombie
{
public:
	Zombie(void);  // default constructor
	Zombie(std::string birth_name);  // name constructor
	~Zombie(void); // destructor

	void set_name(const std::string name );
	void announce( void );

private:
	std::string name;
	
};

#endif