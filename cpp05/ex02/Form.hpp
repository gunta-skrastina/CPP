/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:23:32 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/13 15:27:43 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
#define Form_HPP

#include <string>
#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string _name;
    bool _is_signed;
    const int _grade_to_sign;
    const int _grade_to_exec;
public:
    Form(const std::string name, const int grade_to_sign, const int grade_to_exec);
    Form(const Form& Form);
    Form& operator=(const Form& Form);
    ~Form();

    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExec() const;

    void beSigned(Bureaucrat bureaucrat);
    void signForm(Bureaucrat bureaucrat);

    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, Form& Form);

#endif
