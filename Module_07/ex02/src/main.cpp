/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:40:13 by pmoreira          #+#    #+#             */
/*   Updated: 2026/05/22 14:00:54 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"
#include "../include/Array.tpp"

#include <iomanip>
#include <cstdlib>

#define SIZE 5

int main()
{
	{
		std::cout << "-----------GIVEN--MAIN------------------------------"<< std::endl;
		#define MAX_VAL 750
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}
		std::cout << "----------------MY--MAIN----------------------------"<< std::endl;
	{
		const Array<double> numbers(SIZE);

		std::cout << std::fixed << std::setprecision(1) << std::endl;

		for (int i = 0; i < SIZE; i++)
		{
			numbers[i] = static_cast<double> (i);
			std::cout << "numbers: |";
			std::cout << numbers[i];
			std::cout << "|" << std::endl;
		}
		std::cout << "----------------------------------------------------"<< std::endl;
		Array<double> copy_numbers = numbers;
		Array<double> temp(copy_numbers);

		for (size_t i = 0; i < SIZE; i++)
		{
			std::cout << "copy numbers:" << copy_numbers[i];
			std::cout << " | temp numbers:" << temp[i];
			std::cout << " |" << std::endl;
		}

		std::cout << "----------------------------------------------------"<< std::endl;

		for (int i = 0; i < SIZE; i++)
		{
			numbers[i] = static_cast<double> (i - SIZE);
		}

		for (size_t i = 0; i < SIZE; i++)
		{
			std::cout << "numbers:" << numbers[i];
			std::cout << " | temp numbers:" << temp[i];
			std::cout << " |";
			if (numbers[i] == temp[i])
				std::cout << " EQUAL" << std::endl;
			else
				std::cout << " NOT EQUAL" << std::endl;
		}
		std::cout << "----------------------------------------------------"<< std::endl;

		for (int i = 0; i < SIZE + 1; i++)
		{
			try
			{
				temp[i] = numbers[i];
			}
			catch(const std::exception& e)
			{
				std::cerr << "Exception: " << e.what() << std::endl;
			}
		}
		std::cout << "----------------------------------------------------"<< std::endl;
		for (size_t i = 0; i < SIZE; i++)
		{
			std::cout << "numbers:" << numbers[i];
			std::cout << " | temp numbers:" << temp[i];
			std::cout << " |";
			if (numbers[i] == temp[i])
				std::cout << " EQUAL" << std::endl;
			else
				std::cout << " NOT EQUAL" << std::endl;
		}
		std::cout << "----------------------------------------------------"<< std::endl;
		return (0);
	}
}
