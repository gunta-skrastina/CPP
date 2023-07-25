/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:49:34 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/25 17:15:52 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice & other);
    Ice & operator=(const Ice & other);
    ~Ice();

    virtual AMateria* clone() const;
    virtual void use(ICharacter & target);
};

#endif
