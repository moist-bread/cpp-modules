/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 14:16:04 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	_brain = new Brain();
	std::cout << GRN "a Cat, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UCYN "has appeared";
	std::cout << DEF << std::endl;
}

Cat::Cat(Cat const &source) : AAnimal(source), _brain(NULL)
{
	*this = source;
	std::cout << GRN "a Cat, of type [ ";
	std::cout << getType() << " ] ";
	std::cout << UYEL "has been copy cloned";
	std::cout << DEF << std::endl;
}

Cat::~Cat(void)
{
	delete _brain;
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
	{
		type = source.getType();
		delete _brain;
		_brain = new Brain(*source.get_brain());
	}
	return (*this);
}

Brain *Cat::get_brain(void) const
{
	return (_brain);
}

void Cat::makeSound(void) const
{
	std::cout << YEL "MEOWWWWWWWWWWWW" DEF << std::endl;
}

void Cat::think(void) const
{
	std::cout << YEL "type: " << type << std::endl;
	_brain->display_ideas();
	std::cout << DEF << std::endl;
}

void Cat::have_an_idea(std::string value)
{
	_brain->add_idea(value);
}
