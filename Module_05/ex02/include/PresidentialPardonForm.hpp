/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:41:13 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/28 14:27:45 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const & name);
		PresidentialPardonForm(PresidentialPardonForm const & og);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & other);
		~PresidentialPardonForm();

	void	execute(Bureaucrat const & executor) const;
};