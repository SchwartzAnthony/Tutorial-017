// Tutorial 017.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool isEqual(int x, int y)
{
    return x == y;  // Operator returns true if x equals y, and false otherwise 
}

int main()
{
    std::cout << "Enter an Integer: ";
    int x{};
    std::cin >> x; 

    std::cout << "Enter another Integer: ";
    int y{};
    std::cin >> y; 

    std::cout << std::boolalpha; // prints true or false instead of 0 or 1

    std::cout << x << " and " << y << " are equal? ";
    std::cout << isEqual(x, y); 

    return 0; 
}

