/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:21:24 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/08 13:15:22 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replace_str(std::string s1, std::string s2, std::string str);

int main(int argc, char *argv[])
{
    std::ifstream file;
    std::ofstream new_file;
    std::string new_file_name = ".replace";

    if (argc != 4)
    {
        std::cout << "Wrong argument count" << std::endl;
        return (1);
    }
    file.open(argv[1]);
    if (file.is_open())
    {
        new_file.open(argv[1] + new_file_name);
        if (new_file.is_open())
        {
            std::string line;
            while(std::getline(file, line))
            {
                line = replace_str(argv[2], argv[3], line);
                new_file << line << std::endl;
            }
        }
        else
        {
            std::cout << "Coudln't create a new file" << std::endl;
            return (3);
        }
    }
    else
    {
        std::cout << "File could not be opened" << std::endl;
        return (2);
    }
    file.close();
    new_file.close();
    
    return (0);
}

std::string replace_str(std::string s1, std::string s2, std::string str)
{
    size_t index = 0;
    
    while ((index = str.find(s1, index)) != std::string::npos)
    {
        str.erase(index, s1.length());
        str.insert(index, s2);
        index += s2.length();
    }
    return (str);
}
