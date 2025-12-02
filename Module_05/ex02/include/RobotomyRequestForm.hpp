/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:41:53 by pmoreira          #+#    #+#             */
/*   Updated: 2025/12/02 13:45:05 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const & name);
		RobotomyRequestForm(RobotomyRequestForm const & og);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & other);
		~RobotomyRequestForm();

		std::string	getTarget() const;
		void	execute(Bureaucrat const & executor) const;
};
