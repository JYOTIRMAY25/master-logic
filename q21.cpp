// Take a 3-digit number and check if all digits are distinct. 

#include<iostream>

int main(){

    int num,a,b,c;

    std::cout<<"The enter number :"<<std::endl;
    std::cin>>num;

    if (num>=100&&num<=999)
    {
        int a = num%10;
        int b = (num/10)%10;
        int c = num/100;

        if (a!=b&&b!=c&&c!=a)
        {
            std::cout<<"the number is distinct"<<std::endl;
        }
        else
        {
            std::cout<<"the number is not distinct"<<std::endl;
        }

    }
    else{
        std::cout<<"invalid number!"<<std::endl;
    }   

    return 0;
}