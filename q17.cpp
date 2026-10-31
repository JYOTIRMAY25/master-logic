// Take two numbers and determine whether both are even, both are odd, or one is even and one is odd.

#include<iostream>

int main(){

    int a,b;

    std::cout<<"enter the first number :"<<std::endl;
    std::cin>>a;

    std::cout<<"enter the second number :"<<std::endl;
    std::cin>>b;

    if (a%2==0&&b%2==0)
    {
        std::cout<<"both number are even"<<std::endl;
    }
    else if (a%2!=0&&b%2!=0)
    {
        std::cout<<"both number is odd"<<std::endl;
    }
    else if (a%2!=0&&b%2==0||a%2==0&&b%2!=0)
    {
        std::cout<<"one of the number is even and odd"<<std::endl;
    }
    else
    {
        std::cout<<"enter valid number"<<std::endl;
    }

    return 0;  


}