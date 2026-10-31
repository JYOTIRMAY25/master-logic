// Take a month number (1–12) and print the number of days in that month (ignore leap year)

#include<iostream>

int main(){

    int months;
    std::cout<<"enter the month number :"<<std::endl;
    std::cin>>months;

    if (months>=1&&months<=12)
    {
        if (months == 1 || months== 3 || months == 5 ||
            months == 7 || months == 8 || months == 10 || months == 12)
        {
            std::cout<<"the month has 31 days"<<std::endl;
        }
        else if (months == 4 || months == 6 || months == 9 || months == 11)
        {
            std::cout<<"the month has 30 days"<<std::endl;
        }
        else
        {
            std::cout<<"the month has 28 days"<<std::endl;
        }
       
    }
    else{
        std::cout<<"enter valid month number"<<std::endl;
    }

    return 0;
    
}