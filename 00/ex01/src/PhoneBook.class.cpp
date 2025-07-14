/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/14 18:58:14 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook constructor" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destructor" << std::endl;
	return;
}

void PhoneBook::addContact(void)
{
	std::cout << "Adding a Contact" << std::endl;
	return;
}

void PhoneBook::searchBook(void)
{
	std::cout << "Searching the PhoneBook" << std::endl;
	return;
}

void PhoneBook::closeBook(void)
{
	std::cout << "Bye bye book!!" << std::endl;
	return;
}
