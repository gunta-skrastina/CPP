/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:00:24 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/13 14:35:11 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form("Presidential Pardon", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form)
    :Form(form)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& form)
{
    Form::operator=(form);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
    
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= this->getGradeToExec() && this->getIsSigned())
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    else if (!this->getIsSigned())
        throw("PresidentialPardonForm::NotSignedException");
    else
        throw("PresidentialPardonForm:GradeTooLowException");
}
