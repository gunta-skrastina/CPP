/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:18:58 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/17 14:00:05 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include <iostream>

int main() {
    Data obj(42);
    Data* ptr = &obj;

    uintptr_t serializedPtr = Serialization::serialize(ptr);
    Data* deserializedPtr = Serialization::deserialize(serializedPtr);

    std::cout << "Original pointer: " << ptr << std::endl;
    std::cout << "Deserialized pointer: " << deserializedPtr << std::endl;
    return (0);
}
