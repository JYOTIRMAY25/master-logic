// Take a 3-digit number and determine if the middle digit is the largest, smallest, or neither. 

#include<iostream>

int main(){

    int num;
    std::cout<<"enter the number :"<<std::endl;
    std::cin>>num;

    if (num>=100&&num<=999)
    {
        int a = num%10;
        int b = (num/10)%10;
        int c = num /100;
        
        if (b>a&&b>c)
        {
            std::cout<<"middle digit greater than both other digits"<<std::endl;
        }
        else if (b<a&&b<c)
        {
            std::cout<<"the middle digit smaller than both other digits"<<std::endl;
        }
        else
        {
            std::cout<<"Middle digit is neither largest nor smallest"<<std::endl;
        }
        
    }
    else{
        std::cout<<"the given number is invaild"<<std::endl;
    }
    
    return 0;

}