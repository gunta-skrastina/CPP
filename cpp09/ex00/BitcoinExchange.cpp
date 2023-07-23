/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:29:15 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/23 14:13:11 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string input_file)
{
    loadExchangeRates();
    calculateBitcoinValue(input_file);
    
} 

BitcoinExchange::BitcoinExchange(const BitcoinExchange & other)
    : _exchange_rate(other._exchange_rate)
{
    
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & other)
{
    if (this != & other)
        _exchange_rate = other._exchange_rate;
    return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::loadExchangeRates()
{
    std::ifstream file("data.csv");
    if (!file.is_open())
    {
        std::cout << "Error: couldn't open data file." << std::endl;
        exit(EXIT_FAILURE);
    }
    std::string line;
    while (std::getline(file, line))
    {

        std::istringstream iss(line);
        std::string date_str;
        std::string exchange_rate_str;
        if (std::getline(iss, date_str, ',') && std::getline(iss, exchange_rate_str))
        {
            if (date_str.compare("date") == 0)
                continue;
            std::stringstream ss(exchange_rate_str);
            double exchange_rate;
            ss >> exchange_rate;
            if (isDateValid(date_str))
                _exchange_rate[date_str] = exchange_rate;
        }
    }
    // for (std::map<std::string, double>::iterator it = _exchange_rate.begin(); it != _exchange_rate.end(); ++it)
    // {
    //     std::cout << it->first << " " << it->second << std::endl;
    // }
}

bool BitcoinExchange::isDateValid(std::string date)
{
    std::tm tm_date;
    const char *format = "%Y-%m-%d";
    if (strptime(date.c_str(), format, &tm_date) != NULL)
    {
        int year = tm_date.tm_year + 1900;
        int month = tm_date.tm_mon + 1;
        if ((year >= 2009 && month >= 1 && tm_date.tm_mday >= 2) ||
            (year > 109 && month >= 0 && tm_date.tm_mday >= 0))
            return (true);
    }
    return (false);
}

void  BitcoinExchange::calculateBitcoinValue(std::string input_file)
{
    std::ifstream file(input_file);
    if (!file.is_open())
    {
        std::cout << "Error: couldn't open input file." << std::endl;
        exit(EXIT_FAILURE);
    }
    std::string line;
    while (std::getline(file, line))
    {

        std::istringstream iss(line);
        std::string date_str;
        std::string value_str;
        if (std::getline(iss, date_str, '|') && std::getline(iss, value_str))
        {
            if (date_str.compare("date ") == 0)
                continue;
            std::stringstream ss(value_str);
            double value;
            ss >> value;
            if (isDateValid(date_str))
            {
                if (value < 0)
                    std::cout << "Error: not a positive number." << std::endl;
                else if (value > 1000)
                    std::cout << "Error: too large a number." << std::endl;
                else
                {
                    std::string closest_date;
                    std::map<std::string, double>::iterator it = _exchange_rate.begin();
                    while (it->first <= date_str)
                    {
                        ++it;
                    }
                    --it;
                    std::cout << date_str << " => " << value << " = " << it->second * value << std::endl; 
                }
            }
            else
            {
                std::cout << "Error: bad input => " << date_str << std::endl;
            }
        }
        else
        {
            std::cout << "Error: bad input => " << date_str << std::endl;
        }
    }
}

