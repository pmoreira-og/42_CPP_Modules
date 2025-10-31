/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:48:12 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/31 16:15:05 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int _value;
		static const int _frac;

	public:
		Fixed();
		Fixed(Fixed const & og);
		Fixed & operator=(Fixed const & og);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};