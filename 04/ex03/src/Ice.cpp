/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 16:02:12 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	std::cout << GRN "an Ice, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UCYN "has appeared";
	std::cout << DEF << std::endl;
}

Ice::Ice(Ice const &source): AMateria(source)
{
	*this = source;
	std::cout << GRN "an Ice, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UYEL "has been copy cloned";
	std::cout << DEF << std::endl;
}

Ice::~Ice(void)
{
	std::cout << GRN "an Ice, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << URED "has ran away";
	std::cout << DEF << std::endl;
}

Ice &Ice::operator=(Ice const &source)
{
	(void)source;
	std::cout << YEL "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	// if (this != &source)
	// 	_type = source.getType();
	return (*this);
}

Ice *Ice::clone(void) const
{
	return (new Ice);
}

void Ice::use(ICharacter &target)
{
	std::cout << BLU "* shoots an ice bolt at ";
	std::cout << target.getName() << " *";
	std::cout << DEF << std::endl;
}