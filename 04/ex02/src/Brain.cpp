/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 13:53:04 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain(void): idea_amount(0)
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
		for(int i = 0; i < _max_ideas; i++)
			ideas[i] = source.ideas[i];
		idea_amount = source.idea_amount;
	}
	return (*this);
}

void Brain::add_idea(std::string value)
{
	if (idea_amount == 100)
		idea_amount = 0;
	ideas[idea_amount] = value;
	idea_amount++;
}

void Brain::display_ideas(void) const
{
	std::cout << "IDEAS:" << std::endl;
	for (int i = 0; !ideas[i].empty() && i < _max_ideas; i++)
		std::cout << i + 1 << ". " << ideas[i] << std::endl;
}
