// Take three numbers and check if they are in geometric progression. 

#include<iostream>

int main(){

    int a,b,c;
    std::cout<<"Enter the number:";
    std::cin>>a>>b>>c;

    if ((a == 0 && b == 0 && c == 0) ||
        (a != 0 && b * b == a * c)){
        std::cout<<"They are in GP";

    }
    else{
        std::cout<<"They are not in GP";
    }

    return 0;



}