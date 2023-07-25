/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:27:40 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/14 10:30:43 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal& animal);
	Animal& operator=(const Animal& animal);
    virtual ~Animal();
    
    virtual void makeSound() const;
    std::string getType() const;
};

#endif
