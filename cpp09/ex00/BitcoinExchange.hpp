/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:08:00 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/23 13:42:24 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

# include <map>
# include <string>
# include <sstream>
# include <iostream>
# include <fstream>
# include <cstdlib>
# include <ctime>

class BitcoinExchange
{
private:
    std::map<std::string, double> _exchange_rate;
public:
    BitcoinExchange(std::string input_file);
    BitcoinExchange(const BitcoinExchange & other);
    BitcoinExchange & operator=(const BitcoinExchange & other);
    ~BitcoinExchange();

    void loadExchangeRates();
    void  calculateBitcoinValue(std::string input_file);
    bool isDateValid(std::string date);
};

#endif
