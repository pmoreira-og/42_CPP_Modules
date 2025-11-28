/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:41:53 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/28 13:45:22 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const & name);
		RobotomyRequestForm(RobotomyRequestForm const & og);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & other);
		~RobotomyRequestForm();

		
};
