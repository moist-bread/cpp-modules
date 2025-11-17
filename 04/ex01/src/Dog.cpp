/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/17 14:29:52 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	_brain = new Brain();
	std::cout << GRN "a Dog, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UCYN "has appeared";
	std::cout << DEF << std::endl;
}

Dog::Dog(Dog const &source): Animal(source)
{
	*this = source;
	std::cout << GRN "a Dog, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UYEL "has been copy cloned";
	std::cout << DEF << std::endl;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << GRN "a Dog, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << URED "has ran away";
	std::cout << DEF << std::endl;
}

Dog &Dog::operator=(Dog const &source)
{
	std::cout << YEL "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	if (this != &source)
	{
		type = source.getType();
		*(_brain) = *(source.get_brain());
	}
	return (*this);
}

Brain *Dog::get_brain(void) const
{
	return (_brain);
}

void Dog::makeSound(void) const
{
	std::cout << BLU "WOOF WOOF WOOF WOOF" DEF << std::endl;
}

void Dog::think(void) const
{
	std::cout << YEL "type: " << type << std::endl;
	std::cout << "ideas:" << std::endl;
	for(int i = 0; !_brain->ideas[i].empty() && i < 100; i++)
		std::cout << _brain->ideas[i] << std::endl;
}

void Dog::have_an_idea(std::string value)
{
	int i = 0;
	
	while (!_brain->ideas[i].empty() && i < 100)
		i++;
	if (i == 100)
		i = 0;
	_brain->ideas[i] = value;
}
