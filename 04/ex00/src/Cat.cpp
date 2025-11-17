/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/17 14:23:36 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	std::cout << GRN "a Cat, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UCYN "has appeared";
	std::cout << DEF << std::endl;
}

Cat::Cat(Cat const &source) : Animal(source)
{
	*this = source;
	std::cout << GRN "a Cat, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UYEL "has been copy cloned";
	std::cout << DEF << std::endl;
}

Cat::~Cat(void)
{
	std::cout << GRN "a Cat, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << URED "has ran away";
	std::cout << DEF << std::endl;
}

Cat &Cat::operator=(Cat const &source)
{
	std::cout << YEL "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	if (this != &source)
		type = source.getType();
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << YEL "MEOWWWWWWWWWWWW" DEF << std::endl;
}
