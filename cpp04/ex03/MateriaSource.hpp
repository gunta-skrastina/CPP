/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:01:22 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/25 17:55:53 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"
# include <string>

class MateriaSource : public IMateriaSource
{
private:
    AMateria *materiaSources[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource & other);
    MateriaSource & operator=(const MateriaSource & other);
    ~MateriaSource();

    virtual void learnMateria(AMateria* materia);
    virtual AMateria* createMateria(std::string const & type);
};

#endif
