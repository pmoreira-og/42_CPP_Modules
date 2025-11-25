/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:05:06 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/25 12:33:16 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include "../include/MateriaSource.hpp"
#include "../include/Cure.hpp"
#include "../include/Ice.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	std::cout << "----------------------------------------------" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(4);
	me->unequip(3);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << "----------------------------------------------" << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << "----------------------------------------------" << std::endl;
	me->use(0, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(4, *bob);
	std::cout << "----------------------------------------------" << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}