/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:34:59 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/14 15:58:16 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	type = other.type;
	brain = new Brain(*(other.brain));
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignement constructor called" << std::endl;
	if (this != & other)
	{	
		type = other.type;
		brain = new Brain(*(other.brain));
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << this->type << " says Meow" << std::endl;
}
