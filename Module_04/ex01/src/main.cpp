/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:03:28 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/20 16:24:23 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Dog.hpp"

int main()
{
	const Cat* catA = new Cat();
	Cat* catB = new Cat(*catA);
	const Brain* catA_brain = catA->getBrain();
	const Brain* catB_brain = catB->getBrain();

	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "catA brain pointer: " << catA_brain << std::endl;
	std::cout << "catB brain pointer: " << catB_brain << std::endl;
	std::cout << "Cats' brains are " << (catA_brain == catB_brain ? "the same (shallow copy)" : "different (deep copy)") << std::endl << std::endl;

	if (catA_brain && catB_brain)
	{
		std::cout << "catA idea[0]: " << catA->getBrain()->getIdea(0) << std::endl;
		std::cout << "catB idea[0]: " << catB->getBrain()->getIdea(0) << std::endl;
		std::cout << "catA idea[99]: " << catA->getBrain()->getIdea(99) << std::endl;
		std::cout << "catB idea[99]: " << catB->getBrain()->getIdea(99) << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
	delete catA;
	delete catB;
	std::cout << "----------------------------------------------" << std::endl;
	const Dog* dogA = new Dog();
	Dog* dogB = new Dog(*dogA);
	const Brain* dogA_brain = dogA->getBrain();
	const Brain* dogB_brain = dogB->getBrain();

	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "dogA brain pointer: " << dogA_brain << std::endl;
	std::cout << "dogB brain pointer: " << dogB_brain << std::endl;
	std::cout << "Dogs' brains are " << (dogA_brain == dogB_brain ? "the same (shallow copy)" : "different (deep copy)") << std::endl << std::endl;

	if (dogA_brain && dogB_brain) {
		std::cout << "dogA idea[0]: " << dogA->getBrain()->getIdea(0) << std::endl;
		std::cout << "dogB idea[0]: " << dogB->getBrain()->getIdea(0) << std::endl;
		std::cout << "dogA idea[99]: " << dogA->getBrain()->getIdea(99) << std::endl;
		std::cout << "dogB idea[99]: " << dogB->getBrain()->getIdea(99) << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
	delete dogA;
	delete dogB;
	std::cout << std::endl;
	return 0;
}