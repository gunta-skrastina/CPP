/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:52:58 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/25 17:36:40 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure & other);
    Cure & operator=(const Cure & other);
    ~Cure();

    virtual AMateria* clone() const;
    virtual void use(ICharacter & target);
};

#endif
