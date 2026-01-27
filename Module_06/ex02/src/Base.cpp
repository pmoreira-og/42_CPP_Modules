/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:01:58 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/27 13:41:32 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"

Base::~Base()
{
}

long long	get_current_time(void)
{
	struct timeval	time;

	if (gettimeofday(&time, NULL) == -1)
		return (-1);
	return (time.tv_sec * 1000 + time.tv_usec / 1000);
}

t_type	randomizer(void)
{
	long long current = get_current_time();

	if (current == -1)
		return (ERROR);
	else if(current % 2 == 0)
		return (TYPE_A);
	else if(current % 3 == 0)
		return (TYPE_B);
	else
		return (TYPE_C);
}

Base *	generate(void)
{
	t_type type = randomizer();
	Base *base = NULL;

	switch (type)
	{
		case TYPE_A:
			base = new A();
			break;
		case TYPE_B:
			base = new B();
			break;
		case TYPE_C:
			base = new C();
			break;
		case ERROR:
			std::cout << "Error in get_current_time function" << std::endl;
			break;
		default:
			break;
	}
	return (base);
}

void identify(Base *p)
{
	std::string id;

	if (dynamic_cast<A*>(p))
		id = "A";
	else if (dynamic_cast<B*>(p))
		id = "B";
	else if (dynamic_cast<C*>(p))
		id = "C";
	else
		id = "Invalid";
	std::cout << "Base * has been identified as: ";
	std::cout << id << std::endl;
}

void	identify(Base & p)
{
	std::string id;
	Base identifier;
	try
	{
		identifier = dynamic_cast<A &>(p);
		id = "A";
	} catch (std::exception & e)
	{
		try
		{
			identifier = dynamic_cast<B &>(p);
			id = "B";
		} catch (std::exception & e)
		{
			try
			{
				identifier = dynamic_cast<C &>(p);
				id = "C";
			} catch (std::exception & e)
			{
				id = "Invalid";
			}
		}
	}
	std::cout << "Base & has been identified as: ";
	std::cout << id << std::endl;
}
