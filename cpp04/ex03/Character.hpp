/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:53:44 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/25 18:42:54 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "ICharacter.hpp"
# include <string>
# include <iostream>

class Character : public ICharacter
{
private:
    std::string name;
    AMateria *inventory[4];
public:
    Character(std::string name);
    Character(const Character & other);
    Character & operator=(const Character & other);
    ~Character();

    virtual std::string const & getName() const;
    
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif
