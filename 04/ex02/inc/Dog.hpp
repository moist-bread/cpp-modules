/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 14:15:32 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "AAnimal.hpp"
#include "Brain.hpp"

// -->┊( DOG )┊.´-★☆★

class Dog: public AAnimal
{
public:
	Dog(void);					// default constructor
	Dog(Dog const &source);		// copy constructor
	~Dog(void);					// destructor

	Dog &operator=(Dog const &source); // copy assignment operator overload
	Brain *get_brain(void) const;

	void makeSound(void) const;
	void think(void) const;
	void have_an_idea(std::string value);
	
private:
	Brain *_brain;
};
