/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 14:27:44 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

AAnimal::AAnimal(void) : type("Unidentified")
{
	std::cout << GRN "an AAnimal, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UCYN "has appeared";
	std::cout << DEF << std::endl;
}

AAnimal::AAnimal(AAnimal const &source)
{
	*this = source;
	std::cout << GRN "an AAnimal, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UYEL "has been copy cloned";
	std::cout << DEF << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << GRN "an AAnimal, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << URED "has ran away";
	std::cout << DEF << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &source)
{
	std::cout << YEL "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	if (this != &source)
		type = source.getType();
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (type);
}
