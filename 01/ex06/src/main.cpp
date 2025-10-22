/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/22 23:54:13 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(int argc, char **argv)
{
	std::cout << std::endl;
	std::cout << MAG ">>┈┈┈>   HARL FILTER 🍔";
	std::cout << DEF << std::endl << std::endl;
	
	if (argc != 2)
		return (0);
	Harl harl;
	harl.complain(argv[1]);

	return (0);
}
