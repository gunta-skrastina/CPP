/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:34:59 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/25 19:53:27 by gskrasti         ###   ########.fr       */
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
	if (this != & other)
	{
		std::cout << "Cat copy assignement operator called" << std::endl;
		type = other.type;
		delete (brain);
		brain = new Brain(*(other.brain));
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete (brain);
}

void Cat::makeSound() const
{
	std::cout << this->type << " says Meow" << std::endl;
}
