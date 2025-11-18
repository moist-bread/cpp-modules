/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 14:14:19 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include <iostream>
#include "ICharacter.hpp"

// -->┊( AMATERIA )┊.´-★☆★

class AMateria
{
protected:
	std::string _type; 
	AMateria(void);						// default constructor

public:
	AMateria(std::string const &type);	// type constructor
	AMateria(AMateria const &source);	// copy constructor
	~AMateria(void);					// destructor

	AMateria &operator=(AMateria const &source); // copy assignment operator overload

	std::string const &getType() const; // Returns the materia type

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};