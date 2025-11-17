/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/17 14:34:29 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << CYN ">>┈┈┈>   POLYMORPHISM 🐈🐕";
	std::cout << DEF << std::endl << std::endl;
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	
	const WrongAnimal* y = new WrongCat();
	std::cout << y->getType() << " " << std::endl;
	y->makeSound();

	delete meta;
	delete j;
	delete i;
	delete y;
	return (0);
}
