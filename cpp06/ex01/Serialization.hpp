/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:10:37 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/17 13:59:51 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

# include <cstdint>

struct Data
{
    int value;

    Data(int value);
};

class Serialization
{
private:
    Serialization();
    Serialization(const Serialization & serialization);
    Serialization & operator=(const Serialization & serialization);
    ~Serialization();
public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif
