#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include "easyfind.hpp"

int main() {
    try {
        std::cout << "\n### VECTOR ###" << std::endl;

        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(2);
        vec.push_back(4);

        int searchValue = 3;
        std::vector<int>::iterator result = easyfind(vec, searchValue);
        std::cout << "Found " << searchValue << " at index: " << result - vec.begin() << std::endl;
        searchValue = 6;
        result = easyfind(vec, searchValue);
        std::cout << "Found " << searchValue << " at index: " << result - vec.begin() << std::endl;
    }
    catch (const std::exception& ex)
    {
        std::cout << "Exception: " << ex.what() << std::endl;
    }
    try {
        std::cout << "\n### DEQUE ###" << std::endl;

        std::deque<int> deq;
        deq.push_back(6);
        deq.push_back(7);
        deq.push_back(8);
        deq.push_back(9);
        deq.push_back(10);

        int searchValue = 10;
        std::deque<int>::iterator result = easyfind(deq, searchValue);
        std::cout << "Found " << searchValue << " at index: " << result - deq.begin() << std::endl;
        searchValue = 4;
        result = easyfind(deq, searchValue);
        std::cout << "Found " << searchValue << " at index: " << result - deq.begin() << std::endl;
    }
    catch (const std::exception& ex)
    {
        std::cout << "Exception: " << ex.what() << std::endl;
    }
    try {
        std::cout << "\n### SET ###" << std::endl;

        std::set<int> set;
        set.insert(11);
        set.insert(12);
        set.insert(13);
        set.insert(14);
        set.insert(15);

        int searchValue = 11;
        std::set<int>::iterator result = easyfind(set, searchValue);
        std::cout << "Found: " << searchValue << std::endl;
        searchValue = 6;
        result = easyfind(set, searchValue);
        std::cout << "Found: " << searchValue << std::endl;
    }
    catch (const std::exception& ex)
    {
        std::cout << "Exception: " << ex.what() << std::endl;
    }
    std::cout << std::endl;
    return (0);
}
