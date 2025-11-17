/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/17 15:47:30 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << CYN ">>┈┈┈>   I " CYNC "DON'T" CYN " WANT TO SET THE WORLD ON FIRE 🐈🐕";
	std::cout << DEF << std::endl << std::endl;
	
	int amount = 6;
	if (amount < 2)
		return (2);
	
	Animal *zoo[amount];
	for(int i = 0; i < amount / 2; i++)
		zoo[i] = new Dog();
	for(int i = amount / 2; i < amount; i++)
		zoo[i] = new Cat();
	
	for(int i = 0; i < amount; i++)
		delete zoo[i];
		
	std::cout << std::endl << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	

	delete j;
	delete i;

	std::cout << std::endl << std::endl;
	Dog dog;
	Cat cat;
	Cat second_cat = cat;

	cat.have_an_idea("miau miau miau");
	cat.have_an_idea("have you ever thought about the economical state of poland");
	cat.have_an_idea("miau miau miau");

	cat.think();
	second_cat.think();

	
	return (0);
}
