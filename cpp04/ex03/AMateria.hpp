/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:44:35 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/25 18:48:31 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
class AMateria;
#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
protected:
    std::string type;
public:
    AMateria(std::string const & type);
    AMateria(const AMateria & other);
    AMateria & operator=(const AMateria & other);
    virtual ~AMateria();
    
    std::string const & getType() const; 

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter & target);
};

#endif
