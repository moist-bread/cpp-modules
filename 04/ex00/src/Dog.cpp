/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/14 16:14:12 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	std::cout << GRN "a Dog, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UCYN "has appeared";
	std::cout << DEF << std::endl;
	return;
}

Dog::Dog(Dog const &source) : Animal(source)
{
	*this = source;
	std::cout << GRN "a Dog, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UYEL "has been copy cloned";
	std::cout << DEF << std::endl;
	return;
}

Dog::~Dog(void)
{
	std::cout << GRN "a Dog, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << URED "has ran away";
	std::cout << DEF << std::endl;
	return;
}

Dog &Dog::operator=(Dog const &source)
{
	std::cout << YEL "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	if (this != &source)
		type = source.getType();
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << BLU "WOOF WOOF WOOF WOOF" DEF << std::endl;
	return;
}