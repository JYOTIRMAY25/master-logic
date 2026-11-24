//  Take three numbers and check if they are in arithmetic progression

#include<iostream>

int main(){

    int a,b,c;
    std::cout<<"Enter the number:";
    std::cin>>a>>b>>c;

    if((b-a)==(c-b))
    {
        std::cout<<"The numbers are in arithmetic progression"<<std::endl;
    }
    else
    {
        std::cout<<"The numbers are not in arithmetic progression"<<std::endl;
    }
    return 0;   
}