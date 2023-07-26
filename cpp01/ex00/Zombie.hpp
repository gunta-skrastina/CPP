/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:24:40 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/04 14:20:33 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
   std::string _name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    
    void announce(void);
    std::string getName() const;
    void setName(std::string name);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
