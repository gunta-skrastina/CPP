/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:39:04 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/14 15:58:56 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	type = other.type;
	brain = new Brain(*(other.brain));
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignement constructor called" << std::endl;
	if (this != & other)
	{
		type = other.type;
		brain = new Brain(*(other.brain));
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete (brain);
}

void Dog::makeSound() const
{
	std::cout << type << " says Woof" << std::endl;
}
