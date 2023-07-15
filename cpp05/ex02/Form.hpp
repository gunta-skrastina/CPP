/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:23:32 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/15 14:52:45 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
class Form;
#include "Bureaucrat.hpp"
#include <exception>

class Form
{
private:
    const std::string _name;
    bool _is_signed;
    const int _grade_to_sign;
    const int _grade_to_exec;
public:
    Form(const std::string name, const int grade_to_sign, const int grade_to_exec);
    Form(const Form& form);
    Form& operator=(const Form& form);
    virtual ~Form();

    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExec() const;

    void beSigned(Bureaucrat bureaucrat);

    virtual void execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException : public std::exception
    {
      public:
            const char * what () const throw();  
    };
    class GradeTooLowException : public std::exception
    {
      public:
            const char * what () const throw();  
    };
};

std::ostream& operator<<(std::ostream& os, Form& form);

#endif
