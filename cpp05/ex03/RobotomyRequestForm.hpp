/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:58:57 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/15 14:29:38 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

# include "Form.hpp"
# include <cstdlib>
# include <time.h>

class RobotomyRequestForm : public Form
{
private:
    std::string _target;
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& form);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& form);
    ~RobotomyRequestForm();
    
    virtual void execute(Bureaucrat const & executor) const;

    class NotSignedException : public std::exception
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

#endif
