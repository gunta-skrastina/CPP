#include "Array.hpp"
#include <iomanip>

template <typename T>
void testArray() {
    Array<T> array1;
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << "Constructor with no parameters : \narray1: ";
    for (unsigned int i = 0; i < array1.size(); i++)
    {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;
    Array<T> array2(5);
    std::cout << "Construction with an unsigned int n as a parameter: \narray2: ";
    for (unsigned int i = 0; i < array2.size(); i++)
    {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;
    for (unsigned int i = 0; i < array2.size(); ++i)
    {
        array2[i] = static_cast<T>(i + 50);
    }
    std::cout << "Assigned different values to array2:\narray2: ";
    for (unsigned int i = 0; i < array2.size(); i++)
    {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    array1 = array2;
    std::cout << "Copy array2 to array1:\narray1: ";
    for (unsigned int i = 0; i < array1.size(); i++)
    {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    for (unsigned int i = 0; i < array1.size(); ++i)
    {
        array1[i] = static_cast<T>(array1[i] + 10.3);
    }
    std::cout << "Make changes in array1:\narray1: ";
    for (unsigned int i = 0; i < array1.size(); i++)
    {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "array2 hasn't been changed :\narray2: ";
    for (unsigned int i = 0; i < array2.size(); i++)
    {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    Array<T> array3(array1);
    std::cout << "Create array3 using copy constructor, copy of array1:\narray3: ";
    for (unsigned int i = 0; i < array3.size(); i++)
    {
        std::cout << array3[i] << " ";
    }
    std::cout << std::endl;
    for (unsigned int i = 0; i < array3.size(); ++i)
    {
        array3[i] = static_cast<T>(100);
    }
    std::cout << "Change array3: \narray3: ";
    for (unsigned int i = 0; i < array3.size(); i++)
    {
        std::cout << array3[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "array1 hasn't been changed:\narray1: ";
    for (unsigned int i = 0; i < array1.size(); i++)
    {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;
    array1[array1.size()];
}

int main() {
    try
    {
        std::cout << "\n" << "Testing Array<int>:" << std::endl;
        testArray<int>();

        std::cout << "\n" << "Testing Array<double>:" << std::endl;
        testArray<double>();

        std::cout << "\n" << "Testing Array<char>:" << std::endl;
        testArray<char>();
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return (0);
}
