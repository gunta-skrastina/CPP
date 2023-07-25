/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:29:39 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/14 16:26:00 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	: type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
	: type(other.animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal copy assignement operator called" << std::endl;
	type = animal.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std:: endl;
}

// void Animal::makeSound() const
// {
// 	std::cout << this->type << " makes generic animal noises" << std:: endl;
// }

std::string Animal::getType() const
{
	return (type);
}
