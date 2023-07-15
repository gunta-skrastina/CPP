/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:31:33 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/15 14:11:05 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
class Bureaucrat;
#include "Form.hpp"
#include <exception>

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat& bureaucrat);
    Bureaucrat& operator=(const Bureaucrat& bureaucrat);
    ~Bureaucrat();
    
    std::string getName(void) const;
    int getGrade(void) const;
    
    void increment(void);
    void decrement(void);
    void signForm(Form *form);

    class GradeTooHighException : public std::exception
    {
    public:
        const char * what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char * what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat);

#endif
