/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:53:19 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/13 18:11:18 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade)
    : _name(name)
{
    if (grade >= 1 && grade <= 150)
        this->_grade = grade;
    else if (grade < 1)
        throw("Bureaucrat::GradeTooHighException");
    else if (grade > 150)
        throw("Bureaucrat::GradeTooLowException");
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
    : _name(bureaucrat._name), _grade(bureaucrat._grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
    this->_grade = bureaucrat._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{ 
}

std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void Bureaucrat::increment(void)
{
    this->_grade--;
    if (this->_grade < 1)
        throw("Bureaucrat::GradeTooHighException");
    std::cout << *this << std::endl;
}

void Bureaucrat::decrement(void)
{
    this->_grade++;
    if (this->_grade > 150)
        throw("Bureaucrat::GradeTooLowException");
    std::cout << *this << std::endl;
}

void Bureaucrat::signForm(Form form)
{
    if (form.getIsSigned())
        std::cout << getName() << " cannot sign the " << form.getName() << " because it's already signed" << std::endl;
    else if (form.getGradeToSign() < getGrade())
        std::cout << getName() << " cannot sign the " << form.getName() << " because the grade is too low" << std::endl;
    else
    {
        form.beSigned(*this);
        std::cout << getName() << " signed " << form.getName() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (os);
}
