/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/14 18:16:26 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

int main(int argc, char **argv)
{
	// Contact instance;
	PhoneBook book;

	(void)argv;
	
	// instance.setFirstName("Jorge");
	// instance.setLastName("OGRANDIOSISSIMO");
	// instance.setNickName("jorginho");
	// instance.setPhoneNumber("180180360");
	// instance.setDarkestSecret("tenho medo de aranhas pequenas");
	// instance.printContact();
	// instance.displayInfo();
	if (argc != 1)
		return (std::cout << "the book only opens for those who are worthy" << std::endl, 2);
	// codigo
	return (0);
}
