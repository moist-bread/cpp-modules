/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/14 14:23:57 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "WrongAnimal.hpp"

// -->┊( WRONG CAT )┊.´-★☆★

class WrongCat: public WrongAnimal
{
public:
	WrongCat(void);						// default constructor
	WrongCat(WrongCat const &source);	// copy constructor
	~WrongCat(void);					// destructor

	WrongCat &operator=(WrongCat const &source); // copy assignment operator overload
	
	void makeSound(void) const;
};
