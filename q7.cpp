// take three numbers and print the largest.

#include<iostream>

int main(){

    int a, b,c;
    std::cout<<"enter the first number :"<<std::endl;
    std::cin>>a;

    std::cout<<"enter the second number :"<<std::endl;
    std::cin>>b;

    std::cout<<"enter the  third number :"<<std::endl;
    std::cin>>c;

    if (a>b && a>c)
    {
        std:: cout<<"a is greater than b and c"<<std::endl;

    }
    else if (b>a && b>c)
    {
        std::cout<<"b is greater than a and c"<<std::endl;
    }
    else{
        std::cout<<"c is greater than a and b"<<std::endl;
    }

    return 0;
}