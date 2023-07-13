/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:53:19 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/13 17:46:28 by gskrasti         ###   ########.fr       */
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

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (os);
}

void Bureaucrat::signForm(Form form)
{
    if (form.getIsSigned())
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    else
        std::cout << this->getName() << " coudldn't sign " << form.getName() << " because his grade is too low" << std::endl;
}

void Bureaucrat::executeForm(Form const &form)
{
    if (getGrade() <= form.getGradeToExec() && form.getIsSigned())
    {
        form.execute(*this);
        std::cout << getName() << " executed " << form.getName() << std::endl;
    }
    else if (!form.getIsSigned())
        std::cout << "ERROR: " << form.getName() << " is not signed" << std::endl;
    else
        std::cout << "ERROR: " << getName() << " couldn't execute it due to low grade" << std::endl;
}

