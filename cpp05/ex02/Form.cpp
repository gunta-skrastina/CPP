/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:29:36 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/13 17:29:20 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int grade_to_sign, const int grade_to_exec) 
    : _name(name), _is_signed(false), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
    if (grade_to_sign > 150)
        throw("Form::GradeTooLowException");
    if (grade_to_sign < 1)
        throw("Form::GradeTooHighException");
    if (grade_to_exec > 150)
        throw("Form::GradeTooLowException");
    if (grade_to_exec < 1)
        throw("Form::GradeTooHighException");
}

Form::Form(const Form& form)
    : _name(form._name), _is_signed(form._is_signed), _grade_to_sign(form._grade_to_sign), _grade_to_exec(form._grade_to_exec)
{  
}

Form& Form::operator=(const Form& form)
{
    this->_is_signed = form._is_signed;
    return (*this);
}

Form::~Form()
{
}

std::string Form::getName() const
{
    return (this->_name);
}

bool Form::getIsSigned() const
{
    return (this->_is_signed);
}

int Form::getGradeToSign() const
{
    return (this->_grade_to_sign);
}

int Form::getGradeToExec() const
{
    return (this->_grade_to_exec);
}

void Form::beSigned(Bureaucrat bureaucrat)
{
    if (bureaucrat.getGrade() <= _grade_to_sign)
        _is_signed = true;
    else
        throw("Form::GradeTooLowException");
}

std::ostream& operator<<(std::ostream& os, Form& form)
{
    if (form.getIsSigned())
        os << "\"" << form.getName() << "\" grade to sign " << form.getGradeToSign() << ", grade to execute " << form.getGradeToExec() << ", the form is signed ";
    else
        os << "\"" << form.getName() << "\" grade to sign " << form.getGradeToSign() << ", grade to execute " << form.getGradeToExec() << ", the form is not signed ";
    return (os);
}
