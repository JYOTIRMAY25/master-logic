//Take a weekday number (1–7) and determine if it is a weekday or weekend.

#include<iostream>

int main(){

    int weekdays;
    std::cout<<"enter the week number (1-7): "<<std::endl;
    std::cin>>weekdays;

    if (weekdays>=1&&weekdays<=5)
    {
        std::cout<<"it is a weekday"<<std::endl;
    }
    else if (weekdays==6||weekdays==7)
    {
        std::cout<<"it is a weekend"<<std::endl;
    }
    else
    {
        std::cout<<"invalid input! enter a number between 1 and 7."<<std::endl;
    }

    return 0;
    
}