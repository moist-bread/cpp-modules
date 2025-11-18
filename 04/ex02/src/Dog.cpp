/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 14:16:03 by rduro-pe         ###   ########.fr       */
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

Dog::Dog(Dog const &source): AAnimal(source), _brain(NULL)
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
		delete _brain;
		_brain = new Brain(*source.get_brain());
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
	std::cout << BLU "type: " << type << std::endl;
	_brain->display_ideas();
	std::cout << DEF << std::endl;
}

void Dog::have_an_idea(std::string value)
{
	_brain->add_idea(value);
}
