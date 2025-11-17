/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/17 15:48:58 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain(void)
{
	std::cout << GRN "a Brain " UCYN "has materialized";
	std::cout << DEF << std::endl;
}

Brain::Brain(Brain const &source)
{
	*this = source;
	std::cout << GRN "a Brain " UYEL "has been copy cloned";
	std::cout << DEF << std::endl;
}

Brain::~Brain(void)
{
	std::cout << GRN "a Brain " URED "has dematerialized";
	std::cout << DEF << std::endl;
}

Brain &Brain::operator=(Brain const &source)
{
	if (this != &source)
	{
		for(int i = 0; i < 100; i++)
		{
			// !! THIS LINE IS WRONG
			ideas[i] = source.ideas[i];
			std::cout << "are we still working?" << std::endl;
		}
	}
	return (*this);
}
