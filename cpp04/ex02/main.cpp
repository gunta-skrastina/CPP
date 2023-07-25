/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:42:27 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/14 15:57:30 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	std::cout << std::endl << "*********  Testing   *********" << std::endl << std::endl;
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;
	delete i;
	
	std::cout << std::endl << "*********   Animal array   *********" << std::endl << std::endl;
	
	Animal *animals[10];
	for (int i = 0; i < 5; i++)
	{
		animals[i] = new Dog();
	}
	for (int i = 5; i < 10; i++)
	{
		animals[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	
	std::cout << std::endl << "*********   Deep copy   *********" << std::endl << std::endl;
	
	Dog* e = new Dog();
	Dog* f = new Dog(*e);
	
	delete e;
	delete f;
	
	return (0);
}
