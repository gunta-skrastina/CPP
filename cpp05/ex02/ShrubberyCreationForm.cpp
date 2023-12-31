/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:40:38 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/15 13:52:27 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form("shrubbery creation", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form)
    :Form(form)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form)
{
    Form::operator=(form);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
    
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= this->getGradeToExec() && this->getIsSigned())
    {
        std::ofstream file(_target + "_shrubbery");
        if (!file)
            return;
        file << "     *     \n";
        file << "    / \\    \n";
        file << "   /   \\   \n";
        file << "  /     \\  \n";
        file << " ********* \n";
        file << "    | |    \n";
        file << "    | |    \n";
        file.close();
        std::cout << _target << " shrubbery created" << std::endl;
    }
    else if (!this->getIsSigned())
        throw(ShrubberyCreationForm::NotSignedException());
    else
        throw(ShrubberyCreationForm::GradeTooLowException());
    
}

const char * ShrubberyCreationForm::NotSignedException::what() const throw()
{
    return ("Shrubbery creation form is not signed");
}

const char * ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
    return ("Shrubbery creation form cannot be executed, the grade is too low");
}
