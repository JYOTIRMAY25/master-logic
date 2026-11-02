// Check if a number is a multiple of 7 or ends with 7.

#include<iostream>

int main(){

    int num;

    std::cout<<"enter the number :"<<std::endl;
    std::cin>>num;

    if (num % 7 == 0 && abs(num) % 10 == 7)
    {
        std::cout<<"both "<<std::endl;
    }
    else if (num % 7 == 0)
    {
        std::cout<<"Multiple of 7"<<std::endl;
    }
    else if (abs(num) % 10 == 7)
    {
        std::cout<<"Ends with 7"<<std::endl;
    }
    else
    {
        std::cout<<"Neither"<<std::endl;
    }
    
    return 0;
}