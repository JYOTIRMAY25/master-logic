// Check if one of two given numbers is a multiple of the other

#include<iostream>

int main(){

    int a,b;
    std::cout<<"enter the first number :"<<std::endl;
    std::cin>>a;

    std::cout<<"enter the second number :"<<std::endl;
    std::cin>>b;

     if (a == 0 && b == 0) {
        std::cout << "Both numbers are zero" << std::endl;
    }
    else if (a == 0) {
        std::cout << "One number is a multiple of the other" << std::endl;
    }
    else if (b == 0) {
        std::cout << "One number is a multiple of the other" << std::endl;
    }
    else {
        if (a % b == 0 || b % a == 0) {
            std::cout << "One number is a multiple of the other" << std::endl;
        }
        else {
            std::cout << "Neither is a multiple" << std::endl;
        }
    }
    
    return 0;
}