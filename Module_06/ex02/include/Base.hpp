/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:57:57 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/27 13:16:14 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sys/time.h>

typedef enum e_type
{
	TYPE_A,
	TYPE_B,
	TYPE_C,
	ERROR
}	t_type;

class Base
{
	public:
		virtual ~Base();
};

Base *	generate(void);
void	identify(Base* p);
void	identify(Base& p);


class A : public Base
{
	;
};

class B : public Base
{
	;
};

class C : public Base
{
	;
};

