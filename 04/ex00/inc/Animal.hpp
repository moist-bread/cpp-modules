/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/17 14:34:39 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include <iostream>

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

// -->┊( ANIMAL )┊.´-★☆★

class Animal
{
public:
	Animal(void);					// default constructor
	Animal(Animal const &source);	// copy constructor
	virtual ~Animal(void);			// destructor

	Animal &operator=(Animal const &source); // copy assignment operator overload

	std::string getType(void) const;

	virtual void makeSound(void) const;
	
protected:
	std::string type;
};
