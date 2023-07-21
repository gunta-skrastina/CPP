/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:47:07 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/21 18:47:04 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

class Test
{
private:
    std::string _name;
    int _num;
public:
    Test(std::string name, int num) : _name(name), _num(num) {};
    // ~Test();

    std::string getName() const { return (_name); }
    int getNum() const { return (_num); } 
};

int main()
{
    std::cout << "### MUTANT STACK ###" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    mstack.push(42);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "\n### STD::LIST ###" << std::endl;
    std::list<int> mlist;
    mlist.push_back(5);
    mlist.push_back(17);
    std::cout << mlist.back() << std::endl;
    mlist.pop_back();
    std::cout << mlist.size() << std::endl;
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    mlist.push_back(0);
    mlist.push_back(42);
    std::list<int>::iterator list_it = mlist.begin();
    std::list<int>::iterator list_ite = mlist.end();
    ++list_it;
    --list_it;
    while (list_it != list_ite)
    {
        std::cout << *list_it << std::endl;
        ++list_it;
    }
    std::stack<int, std::list<int> > s_list(mlist);

    std::cout << "\n### MUTANT STACK WITH USER DEFINED VARIABLES ###" << std::endl;

    MutantStack<Test> testStack;
    testStack.push(Test("test1", 42));
    testStack.push(Test("test2", 18));
    testStack.push(Test("test3", 84));
    testStack.push(Test("test4", 7483));
    testStack.push(Test("test5", 8439));
    
    Test topTest = testStack.top();
    std::cout << "Top test is " << topTest.getName() << "(" << topTest.getNum() << ")" << std::endl;
    
    for (MutantStack<Test>::iterator test_it = testStack.begin(); test_it != testStack.end(); ++test_it)
    {
        std::cout << (*test_it).getName() << "(" << (*test_it).getNum() << ")" << std::endl;
    }

    std::cout << "\n### STD::LIST WITH USER DEFINED VARIABLES ###" << std::endl;

    std::list<Test> testList;
    testList.push_back(Test("test1", 42));
    testList.push_back(Test("test2", 18));
    testList.push_back(Test("test3", 84));
    testList.push_back(Test("test4", 7483));
    testList.push_back(Test("test5", 8439));

    Test topListTest = testList.back();
    std::cout << "Top test is " << topListTest.getName() << "(" << topListTest.getNum() << ")" << std::endl;

    for (std::list<Test>::iterator test_it = testList.begin(); test_it != testList.end(); ++test_it)
    {
        std::cout << (*test_it).getName() << "(" << (*test_it).getNum() << ")" << std::endl;
    }

    return (0);
}
