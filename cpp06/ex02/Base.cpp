/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:04:43 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/17 14:42:55 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base(/* args */)
{
    srand(time(NULL));
}

Base::~Base()
{
}

Base * Base::generate(void)
{
    int random = rand() % 3;
    if (random == 0)
        return (new A());
    else if (random == 1)
        return (new B());
    else
        return (new C());
}

void Base::identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void Base::identify(Base &p)
{
    try
    {
        static_cast<void>(dynamic_cast<A&>(p));
        std::cout << "A" << std::endl;
    }
    catch (const std::bad_cast&)
    {
        try
        {
            static_cast<void>(dynamic_cast<B&>(p));
            std::cout << "B" << std::endl;
        }
        catch(const std::bad_cast&)
        {
            try
            {
                static_cast<void>(dynamic_cast<C&>(p));
                std::cout << "C" << std::endl;
            }
            catch(const std::bad_cast&)
            {
                std::cout << "Unknown" << std::endl;
            }   
        }   
    }
}
