/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:27:40 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/25 19:18:04 by gskrasti         ###   ########.fr       */
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
    Animal(std::string type);
    Animal(const Animal& other);
	Animal& operator=(const Animal& other);
    virtual ~Animal();
    
    virtual void makeSound() const;
    std::string getType() const;
};

#endif
