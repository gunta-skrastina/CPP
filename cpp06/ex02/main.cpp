/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:14:03 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/17 14:42:46 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() {
    Base* obj = Base::generate();
    Base::identify(obj);
    Base* obj2 = Base::generate();
    Base::identify(obj2);
    Base* obj3 = Base::generate();
    Base::identify(obj3);
    A objA = A();
    Base::identify(objA);
    B objB = B();
    Base::identify(objB);
    C objC = C();
    Base::identify(objC);
    delete obj;
    return (0);
}
