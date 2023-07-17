/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:14:55 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/17 10:49:38 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <cstring>
# include <limits>
# include <cmath>

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter & converter);
    ScalarConverter & operator=(const ScalarConverter & converter);
    ~ScalarConverter();

    static bool isChar(std::string literal);
    static bool isInt(std::string literal);
    static bool isFloat(std::string literal);
    static bool isDouble(std::string literal);
    static int  convertInt(std::string literal);
    static char convertChar(std::string literal);
    static double convertDouble(std::string literal);
    static float convertFloat(std::string literal);
    template<typename T>
    static void convertToAll(const T& value);
public:
    static void convert(std::string literal);
};

#endif
