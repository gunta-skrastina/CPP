/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:29:39 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/14 15:58:38 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = animal.type;
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << "Animal copy assignement constructor called" << std::endl;
	this->type = animal.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std:: endl;
}

void Animal::makeSound() const
{
	std::cout << this->type << " makes generic animal noises" << std:: endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
