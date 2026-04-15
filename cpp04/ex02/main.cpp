/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 03:12:04 by ml-hote           #+#    #+#             */
/*   Updated: 2026/04/03 20:26:27 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABS_Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

static void printAnimal(const ABS_Animal& animal)
{
	std::cout << "Type: " << animal.getType() << " | Sound: ";
	animal.makeSound();
}

int main()
{
	std::cout << "=== Test 1: Polymorphism through base pointers ===" << std::endl;
	ABS_Animal* zoo[4];
	zoo[0] = new Dog();
	zoo[1] = new Cat();
	zoo[2] = new Dog();
	zoo[3] = new Cat();

	for (int i = 0; i < 4; ++i)
		printAnimal(*zoo[i]);

	std::cout << std::endl;
	std::cout << "=== Test 2: Polymorphism through references ===" << std::endl;
	Dog dog;
	Cat cat;
	printAnimal(dog);
	printAnimal(cat);

	std::cout << std::endl;
	std::cout << "=== Test 3: Virtual destructor through ABS_Animal* ===" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		delete zoo[i];
		zoo[i] = NULL;
	}

	return 0;
}