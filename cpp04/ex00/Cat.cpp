/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:34:59 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/25 19:29:53 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat & other)
	: Animal(other.type)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=(const Cat & other)
{
	std::cout << "Cat copy assignement operator called" << std::endl;
	if (this != & other)
		type = other.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << this->type << " says Meow" << std::endl;
}
