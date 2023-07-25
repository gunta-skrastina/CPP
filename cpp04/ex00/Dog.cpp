/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:39:04 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/25 19:30:30 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog & other)
	: Animal(other.type)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(const Dog & other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != & other)
		type = other.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << this->type << " says Woof" << std::endl;
}
