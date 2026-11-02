// Check whether a given integer is single-digit, double-digit, or multi-digit.

#include<iostream>

int main(){

    int num;

    std::cout<<"Enter a number :"<<std::endl;
    std::cin >> num;

    if (num >= -9 && num <= 9)
    {
        std::cout<<"The number is single digit "<<std::endl;
    }
    else if ((num >= 10 && num <= 99)||(num >= -99 && num <= -10))
    {
        std::cout<<"The number is double digit "<<std::endl;        
    }
    else
    {
        std::cout<<"multi-digit"<<std::endl;
    }
    
return 0;
}