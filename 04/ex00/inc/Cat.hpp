/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/13 15:42:44 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "Animal.hpp"

// -->┊( CAT )┊.´-★☆★

class Cat: public Animal
{
public:
	Cat(void);					// default constructor
	Cat(Cat const &source);		// copy constructor
	~Cat(void);					// destructor

	Cat &operator=(Cat const &source); // copy assignment operator overload
	
	void makeSound(void) const;
};
