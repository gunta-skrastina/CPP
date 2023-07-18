/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:33:37 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/18 17:53:03 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
	T * _data;
	unsigned int _length;
public:
	Array()
		: _data(nullptr), _length(0)
	{
	}
	
	Array(int n)
		: _length(n)
	{
		_data = new T[_length];
	}

	Array(Array & array)
	{
		_length = array._length;
		_data = new T[_length];
		for (unsigned int i = 0; i < _length ; i++)
		{
			_data[i] = array._data[i];
		}
	}
	
	Array & operator=(Array & array)
	{
		if (this != &array)
		{	
			delete [] _data;
			_length = array._length;
			_data = new T[_length];
			for (unsigned int i = 0; i < _length ; i++)
			{
				_data[i] = array._data[i];
			}
		}
		return (*this);
	}

	T& operator[](unsigned int index)
	{
		if (index >= _length)
		{
			throw std::out_of_range("Index out of bounds");
		}
		return (_data[index]);
	}

	unsigned int size() const
	{
		return (_length);
	}
};

#endif
