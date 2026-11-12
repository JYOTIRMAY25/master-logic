// Take two numbers and check if both are positive and their sum is less than 100. 

#include<iostream>

int main(){

    int a;
    std::cout<<"enter the number a :"<<std::endl;
    std::cin>>a;

    int b;
    std::cout<<"enter the number b :"<<std::endl;
    std::cin>>b;

    if(a>=0||b>=0)
    {
        if ((a+b)<=100)
        {
            std::cout<<"both numbers are positive and their sum is less than 100"<<std::endl;
        }
        else
        {
            std::cout<<"both numbers are positive but their sum is greater than 100"<<std::endl;
        }
        
    }
    else
    {
        std::cout<<"both numbers are not positive"<<std::endl;
    }

    return 0;

}