/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 16:02:16 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	std::cout << GRN "a Cure, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UCYN "has appeared";
	std::cout << DEF << std::endl;
}

Cure::Cure(Cure const &source): AMateria(source)
{
	*this = source;
	std::cout << GRN "a Cure, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UYEL "has been copy cloned";
	std::cout << DEF << std::endl;
}

Cure::~Cure(void)
{
	std::cout << GRN "a Cure, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << URED "has ran away";
	std::cout << DEF << std::endl;
}

Cure &Cure::operator=(Cure const &source)
{
	(void)source;
	std::cout << YEL "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	// if (this != &source)
	// 	_type = source.getType();
	return (*this);
}

Cure *Cure::clone(void) const
{
	return (new Cure);
}

void Cure::use(ICharacter &target)
{
	std::cout << GRN "* heals " << target.getName();
	std::cout << "'s wounds *";
	std::cout << DEF << std::endl;
}
