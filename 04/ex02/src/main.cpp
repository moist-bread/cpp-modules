/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 14:28:51 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << CYN ">>┈┈┈>   ABSTRACT CLASS 🐈🐕";
	std::cout << DEF << std::endl << std::endl;
		
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	// const AAnimal* i = new AAnimal();

	delete j;
	delete i;

	std::cout << std::endl << std::endl;
	Dog dog;
	Cat cat;
	// AAnimal animal;
	
	cat.have_an_idea("miau miau miau");
	Cat second_cat = cat;
	cat.have_an_idea("have you ever thought about the economical state of poland");
	cat.have_an_idea("miau miau miau");

	std::cout << std::endl;
	cat.think();
	std::cout << std::endl;
	second_cat.think();
	std::cout << std::endl;
	
	return (0);
}
