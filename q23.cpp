// Take a 4-digit number and check if the first and last digits are equal.

#include<iostream>

int main(){

    int num;
    std::cout<<"enter the number"<<std::endl;
    std::cin>>num;

    if (num>=1000&&num<=9999)
    {
        int a = num%10;
        int b = (num/10)%10;
        int c = num/100;
        int d = num/1000;

        if (a==d)
        {
            std::cout<<"the give number is equal"<<std::endl;

        }
        else
        {
            std::cout<<"the give number is not equal"<<std::endl;
        }
        
    }
    else
    {
        std::cout<<"invaid number!"<<std::endl;
        
    }
    
    return 0;

}