/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:03:53 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/17 14:35:03 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

# include <time.h>
# include <cstdlib>
# include <iostream>

class Base
{
public:
    Base();
    virtual ~Base();

    static Base *generate(void);
    static void identify(Base *p);
    static void identify(Base &p);
};

#endif
