// Take 24-hour time (hours and minutes) and print whether it is AM or PM. 

#include <iostream>

int main() {

    int hours, minutes;

    std::cout<< "Enter hours (0-23): ";
    std::cin>> hours;

    std::cout<< "Enter minutes (0-59): ";
    std::cin>> minutes;

    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59)
    {
        std::cout<<"Invalid time"<<std::endl;
    }
    else if (hours < 12)
    {
        std::cout<<"AM"<<std::endl;
    }
    else
    {
        std::cout<<"PM"<<std::endl;
    }

    return 0;
}