/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:30:04 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/10 16:49:27 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    this->_fixed_point_value = 0;
}

Fixed::Fixed(const int i)
{
    this->_fixed_point_value = i << _fractional_bits;
    // std::cout << "integer's " << i << " fixed point value is " << _fixed_point_value << std::endl;
}

Fixed::Fixed(const float i)
{
    this->_fixed_point_value = (int)roundf(i * (1 <<_fractional_bits));
    // std::cout << "float's " << i << " fixed point value is " << _fixed_point_value << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
    // std::cout << "Copy constructor called" << std::endl;
    this->_fixed_point_value = fixed._fixed_point_value;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    // std::cout << "Copy assigment constructor called" << std::endl;
    this->_fixed_point_value = fixed._fixed_point_value;
    return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return (this->_fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixed_point_value = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)_fixed_point_value / (1 << _fractional_bits));
}

int Fixed::toInt(void) const
{
    return (_fixed_point_value >> _fractional_bits);
}

bool	Fixed::operator>(const Fixed& fixed) const
{
    return(this->_fixed_point_value > fixed._fixed_point_value);
}

bool	Fixed::operator<(const Fixed& fixed) const
{
    return(this->_fixed_point_value < fixed._fixed_point_value);
}

bool	Fixed::operator>=(const Fixed& fixed) const
{
    return(this->_fixed_point_value >= fixed._fixed_point_value);
}

bool	Fixed::operator<=(const Fixed& fixed) const
{
    return(this->_fixed_point_value <= fixed._fixed_point_value);
}

bool	Fixed::operator==(const Fixed& fixed) const
{
    return(this->_fixed_point_value == fixed._fixed_point_value);
}
bool	Fixed::operator!=(const Fixed& fixed) const
{
    return(this->_fixed_point_value != fixed._fixed_point_value);
}

Fixed	Fixed::operator+(const Fixed& fixed) const
{
    Fixed result = Fixed(this->toFloat() + fixed.toFloat());
    return (result);
}

Fixed	Fixed::operator-(const Fixed& fixed) const
{
    Fixed result = Fixed(this->toFloat() - fixed.toFloat());
    return (result);
}

Fixed	Fixed::operator*(const Fixed& fixed) const
{
    Fixed result = Fixed(this->toFloat() * fixed.toFloat());
    return (result);
}

Fixed	Fixed::operator/(const Fixed& fixed) const
{
    Fixed result = Fixed(this->toFloat() / fixed.toFloat());
    return (result);
}
Fixed&	Fixed::operator++() //pre-increment
{
    this->_fixed_point_value++;
    return (*this);
}
Fixed	Fixed::operator++(int) //post-increment
{
    Fixed temp = *this;
    this->_fixed_point_value++;
    return (temp);
}

Fixed&	Fixed::operator--() //pre-increment
{
    this->_fixed_point_value --;
    return (*this);
}

Fixed	Fixed::operator--(int) //post-increment
{
    Fixed temp = *this;
    this->_fixed_point_value --;
    return (temp);
}

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
    if (fixed2 < fixed1)
        return (fixed2);
    else
        return (fixed1);
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
    if (fixed2 < fixed1)
        return (fixed2);
    else
        return (fixed1);
}

Fixed& Fixed::max(Fixed& fixed1,Fixed& fixed2)
{
    if (fixed2 > fixed1)
        return (fixed2);
    else
        return (fixed1);
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
    if (fixed2 > fixed1)
        return (fixed2);
    else
        return (fixed1);
}
