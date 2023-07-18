/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:09:45 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/18 13:31:08 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print_element(T element)
{
    std::cout << element << " ";
}

int main()
{
    int int_array[] = {1, 2, 3, 4, 5};
    unsigned int int_len = sizeof(int_array) / sizeof(int);
    iter(int_array, int_len, print_element<int>);
    std::cout << std::endl;

    char char_array[] = {'a', 'b', 'c', 'd', 'e'};
    unsigned int char_len = sizeof(char_array) / sizeof(char);
    iter(char_array, char_len, print_element<char>);
    std::cout << std::endl;

    std::string string_array[] = {"one", "two", "three", "four", "five", "six"};
    unsigned int string_len = sizeof(string_array) / sizeof(std::string);
    iter(string_array, string_len, print_element<std::string>);
    std::cout << std::endl;

    double double_array[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    unsigned int double_len = sizeof(double_array) / sizeof(double);
    iter(double_array, double_len, print_element<double>);
    std::cout << std::endl;
    return (0);
}
