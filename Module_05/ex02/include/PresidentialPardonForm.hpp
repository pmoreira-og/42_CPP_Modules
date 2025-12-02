/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:41:13 by pmoreira          #+#    #+#             */
/*   Updated: 2025/12/02 13:51:09 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const & name);
		PresidentialPardonForm(PresidentialPardonForm const & og);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & other);
		~PresidentialPardonForm();

		std::string	getTarget() const;
		void	execute(Bureaucrat const & executor) const;
};