/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:03:00 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/13 15:27:43 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& form)
    :Form(form)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& form)
{
    Form::operator=(form);
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
    
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= this->getGradeToExec() && this->getIsSigned())
    {
        std::cout << "Drilling noises..." << std::endl;
        srand(time(NULL));
        int random = rand() % 2;
        if (random)
            std::cout << _target << " has been robotomized successfully" << std::endl;
        else
            std::cout << "Robotomy of "<< _target << " has failed" << std::endl;
    }
    else if (!this->getIsSigned())
        throw("RobotomyRequestForm::NotSignedException");
    else
        throw("RobotomyRequestForm:GradeTooLowException");
}
