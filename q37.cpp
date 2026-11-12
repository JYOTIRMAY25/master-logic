//  Take a single digit (0–9) and print its word form (“Zero” to “Nine”). 

#include <iostream>

int main()
{
    int digit;
    std::cout << "Enter a single digit (0-9): " << std::endl;
    std::cin >> digit;

    if (digit==0)
    {
        std::cout << "Zero" << std::endl;
    }
    else if (digit==1)
    {
        std::cout << "One" << std::endl;
    }
    else if (digit==2)
    {
        std::cout << "Two" << std::endl;
    }
    else if (digit==3)
    {
        std::cout << "Three" << std::endl;
    }
    else if (digit==4)
    {
        std::cout << "Four" << std::endl;
    }
    else if (digit==5)
    {
        std::cout << "Five" << std::endl;
    }
    else if (digit==6)
    {
        std::cout << "Six" << std::endl;
    }
    else if (digit==7)
    {
        std::cout << "Seven" << std::endl;
    }
    else if (digit==8)
    {
        std::cout << "Eight" << std::endl;
    }
    else if (digit==9)
    {
        std::cout << "Nine" << std::endl;
    }
    else
    {
    std::cout << "Invalid digit! Enter a number between 0 and 9." << std::endl;
    }

    return 0;
    

}