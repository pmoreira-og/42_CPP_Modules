/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:41:17 by pmoreira          #+#    #+#             */
/*   Updated: 2025/12/02 15:37:08 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

static void draw_tree(std::ofstream & outfile);

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Nameless_form", 145, 137), _target("Unknown")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
: AForm(target + "_form", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm assignment constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & og)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = og;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & other)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_signed = other._signed;
		this->_target = other._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSignStatus())
		throw FormNotSignedException();
	if (this->_execGrade < executor.getGrade())
		throw GradeTooLowException();
	std::ofstream outfile((this->getTarget() + "_shrubbery").c_str());
	if (!outfile)
	{
		std::cerr << "Couldn't make the outfile" << std::endl;
		return ;
	}
	draw_tree(outfile);
}

static void draw_tree(std::ofstream & outfile)
{
	outfile << "                                                                                                    \n";
	outfile << "                                                                                                    \n";
	outfile << "    .             .                              .:                .                                \n";
	outfile << "                                             -....:..:-                                             \n";
	outfile << "                                               +-..-                                                \n";
	outfile << "                                               .++++.                                               \n";
	outfile << "                                                 ==                                                 \n";
	outfile << "                                                +++                                                 \n";
	outfile << "               .                       .     == +++=+=                                              \n";
	outfile << "                                             :+++*#*=--   +                                         \n";
	outfile << "                                          ++  =+*###=:=+++                                          \n";
	outfile << "                                         +*++=+=##*++.-*+++                                         \n";
	outfile << "                                       ++  ++-*%##%#***+=+                                          \n";
	outfile << "                                       *==+*=**#+**%###+*+:                                         \n";
	outfile << "                                         -=######.:*+**=:**+                                        \n";
	outfile << "                                        *+==*%**+**%####=                                           \n";
	outfile << "                                      ==#=+**#%#%%%##*%*=+==*+                           .          \n";
	outfile << "               .                    ==*% +=+*####%+%##******+                                       \n";
	outfile << "                                   +=*+*++=*#%%%%#@%%#--+#+***+++                                   \n";
	outfile << "                                    :=*****#%%%#*#*%*#####+***=+                                    \n";
	outfile << "                                   := =+=+##*%#*--%@@@%##*#+=+ +*                                   \n";
	outfile << "                                     :.:+=+#*#%%#==#%%%%#++*-++                                     \n";
	outfile << "                                 *++ +++**##*##%%%%%#*#%##*++++ +=*+                                \n";
	outfile << "                                ++++**#*####%**%%**%#%%@%##*+.=***++                                \n";
	outfile << "   .                            .++#++#*%%%@@++@@##*:*%%%#%##****++                                 \n";
	outfile << "                                =* **+-=+#%%@%@@@%#%####*%%%##*%=+=+-                               \n";
	outfile << "                            ++    -=--*##%#%##**-#@%%%%%#%#*=*=%%-.                                 \n";
	outfile << "                             *+*-:+=#*###%#%##%%#%@@%##*%%###%*:. +   +=                            \n";
	outfile << "                    .        +*+++*%#%**#%%%*%%@#@%%%@-@@%-###*+***++++                             \n";
	outfile << "                             .=+:+*%%@@%@%%.-:#%@@@@@:-:%%@%%%%##+*#+=+                             \n";
	outfile << "                               ++%+*+##+*##%##%%@@%#%*@%@%-%@@%%#::+ #  %=                          \n";
	outfile << "                         +##*###*#%**#*%%@@#*#%%@%@@+@@@%*#%%%*+%##*+=++ +                          \n";
	outfile << "           .              %+ ***#%%::%%@@@@%####%###@##*###*%%%%##**#**#++++                        \n";
	outfile << "                         -+++*+*#%%###%%%@#@@*@@@*%##%+*%@%**%%#%#=*##+*++                          \n";
	outfile << "                           =**=++##*#%%#**##%++@@%%%%@@@*%%%%%*%**##++*= =:                         \n";
	outfile << "                .      ++*+ +#..=*###%%@++:#@%@@@@@%%@@@*+=%**%#%%#***+@                            \n";
	outfile << "                       +**#**##*####%#%%#%@@@%%@@%*%#*#%#*#*%%#%%%%%##***=#+**+*                    \n";
	outfile << "                       +*=+#%%%%%#.*##@@+@%%%@@@###*#%%@%%%%%#:%%##*%@%%%*##+%                      \n";
	outfile << "                       *%%+**++#*%%%%@@@%#%#%%%@%@#=*%%%@@%@%%%##*%##*###*+*                        \n";
	outfile << "                    +=   +#+++##*##%%%@@%%+@%@@@@%%*#%%%%%#@@%#%@%%##%*#*+@*=                       \n";
	outfile << " .                    +**+%*+%%%%%%*@@%@@+=%@@@##%%%@=%%@###*@@%%%@%-###%%#%#*+                     \n";
	outfile << "                 +++-++*###*:#%%@@@%#%@@%#%%#%%#*#%#@@@@@@*%#*%@@%@*:+%%%+=++++*                   .\n";
	outfile << "                    +++*##%#%%@@%*#%##@%@%%#%@@@#@@%%%%@@@**@@#@%%@#%##**##%#*+                     \n";
	outfile << "                    ++++#+##%*#%%#*#%%@%%##%#%@@@@@@%%#*#%%%#+%%*#@#%%%##****+**+                   \n";
	outfile << "               .      ++ *#+#++%**:+%%**%*#@*#%%%%%%@%%=@##%+%**#=+=*+*#*+ #*  +                    \n";
	outfile << "                     +   +  =##*%#%%#*%@#*%+%#@@@@%%@@@*@@@@@@@#*@@+++ #    *  +                    \n";
	outfile << "           .            * +++###:%##%@%%@@@@@@@@@+:@@@@@@#@##@@*@@@%*%---=                          \n";
	outfile << "                    =-#+##%*#*+*%%%@@@%%%@@%%@@*%%@+@%%@%%%@%%%%****+***=+%:*+:+                    \n";
	outfile << "                    =++#-+*+%**+#%%%%@#@@@@%%==+.=#=*#%%#%%@@@%%*********#%#%%=:                    \n";
	outfile << "                    +++#=**:**@=-+++++%#%@@%@**#**.**#@@**%@@@%%***#****==%#%%+                     \n";
	outfile << "                    +**%=**:+*@=*==+**@@%@@#@%%%**.++#@##%:***@%***#****++                          \n";
	outfile << "                          #-#*@+#==+*#@+==*+++*@**.**%@@**:***@%***#*****%                          \n";
	outfile << "                                %++*#%@*++#*+*#%*#:*#@@@**:###%%###@*                               \n";
	outfile << "                                                #%-##                                               \n";
	outfile << "                                                                                                    ";
	outfile << std::endl;
}
