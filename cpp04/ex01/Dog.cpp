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
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = dog.type;
	this->brain = new Brain(*(dog.brain));
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Dog copy assignement constructor called" << std::endl;
	this->type = dog.type;
	this->brain = new Brain(*(dog.brain));
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << this->type << " says Woof" << std::endl;
}
