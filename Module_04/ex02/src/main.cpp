/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:03:28 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/21 10:59:59 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Dog.hpp"

int main()
{
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();
	
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	dog->makeSound();
	cat->makeSound();
	std::cout << "----------------------------------------------" << std::endl;
	const WrongAnimal* wrong_cat = new WrongCat();
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl;
	wrong_cat->makeSound();
	std::cout << "----------------------------------------------" << std::endl;
	/* const AAnimal* meta = new AAnimal();
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	const AAnimal test = *dog;
	test.makeSound();
	std::cout << test.getType() << " " << std::endl; */
	std::cout << "----------------------------------------------" << std::endl;
	delete (cat);
	delete (wrong_cat);
	delete (dog);
	return 0;
}