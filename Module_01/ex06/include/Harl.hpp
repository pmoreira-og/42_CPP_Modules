/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:22:56 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/29 11:31:40 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef enum e_type
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	DEFAULT
}	t_type;

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		Harl();
		~Harl();
		void complain( std::string level );
};
