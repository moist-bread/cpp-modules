/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 16:02:21 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria(void): _type("type")
{
	std::cout << GRN "an AMateria, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UCYN "has appeared";
	std::cout << DEF << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << GRN "an AMateria, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UCYN "has appeared";
	std::cout << DEF << std::endl;
}

AMateria::AMateria(AMateria const &source)
{
	*this = source;
	std::cout << GRN "an AMateria, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UYEL "has been copy cloned";
	std::cout << DEF << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << GRN "an AMateria, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << URED "has ran away";
	std::cout << DEF << std::endl;
}

AMateria &AMateria::operator=(AMateria const &source)
{
	(void)source;
	std::cout << YEL "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	// if (this != &source)
	// 	_type = source.getType();
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << MAG "* does absolutely nothing to ";
	std::cout << target.getName() << " *";
	std::cout << DEF << std::endl;
}
