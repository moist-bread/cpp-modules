/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/13 15:42:48 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "Animal.hpp"

// -->┊( DOG )┊.´-★☆★

class Dog: public Animal
{
public:
	Dog(void);					// default constructor
	Dog(Dog const &source);		// copy constructor
	~Dog(void);					// destructor

	Dog &operator=(Dog const &source); // copy assignment operator overload

	void makeSound(void) const;
};
