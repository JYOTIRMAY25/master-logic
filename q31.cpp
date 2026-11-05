// Take a character and check if it is a letter, a digit, or neither.  

#include <iostream>

int main() {

    char ch;

    std::cout<<"Enter a character: ";
    std::cin>> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        std::cout<< "The character is a letter" << std::endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        std::cout<< "The character is a digit" << std::endl;
    }
    else
    {
        std::cout<< "The character is neither a letter nor a digit" << std::endl;
    }

    return 0;
}