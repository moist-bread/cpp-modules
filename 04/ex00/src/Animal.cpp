/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/06 15:48:59 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal(void): type("Unidentified")
{
	std::cout << GRN "an Animal, more commonly identified as [ ";
	std::cout << getType() << " ] ";
	std::cout << UCYN "has appeared";
	std::cout << DEF << std::endl;
	return;
}

Animal::Animal(Animal const &source)
{
	*this = source;
	std::cout << GRN "an Animal, more commonly identified as [ ";
	std::cout << getType() << " ] ";
	std::cout << UYEL "has been copy cloned";
	std::cout << DEF << std::endl;
	return;
}

Animal::~Animal(void)
{
	std::cout << GRN "an Animal, more commonly identified as [ ";
	std::cout << getType() << " ] ";
	std::cout << URED "has ran away";
	std::cout << DEF << std::endl;
	return;
}

Animal &Animal::operator=(Animal const &source)
{
	std::cout << MAG "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	type = source.getType();
	return (*this);
}

std::string Animal::getType(void) const
{
	return (type);
}

void Animal::makeSound(void) const
{
	std::string sound;
	if (getType() == "Cat")
		sound = YEL "MEOWWWWWWWWWWWW";
	else if (getType() == "Dog")
		sound = BLU "WOOF WOOF WOOF WOOF";
	else
		sound = MAG "RAWRRRRRRRRR";
	
	std::cout << sound << std::endl;
	return;
}
