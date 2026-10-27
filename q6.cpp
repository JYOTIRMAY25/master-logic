// Take two numbers and print the larger one. 

#include<iostream>

int main(){

    int a,b;
    std::cout<<"enter the first number :"<<std::endl;

    std::cin>>a;
    
    std::cout<<"enter the second number :"<<std::endl;
    
    std::cin>>b;

    if (a>b)
    {
        std::cout<<"the a is greater than b"<<std::endl;
    }
    else if (a<b)
    {
        std::cout<<"the b is greater than a"<<std::endl;
        
    }
    else
    {
        std:: cout<<"the a and b is equal "<<std::endl;

    }
    
    

    return 0;


}