/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:03:28 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/20 13:17:27 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();
	std::cout << "----------------------------------------------" << std::endl;
	const WrongAnimal* wrong_cat = new WrongCat();
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl;
	wrong_cat->makeSound();
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Runtime Polymorphism shouldn't override the member function here" << std::endl;
	const Animal test = *dog;
	test.makeSound();
	std::cout << test.getType() << " " << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	delete (meta);
	delete (cat);
	delete (wrong_cat);
	delete (dog);
	return 0;
}