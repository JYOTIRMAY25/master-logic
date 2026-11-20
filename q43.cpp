// Take day and month and check if it forms a valid calendar date (ignoring leap years).

#include<iostream>

int main(){

    int day,month;

    std::cout<<"Enter day and month: ";
    std::cin>>day>>month;


    if ((day>0&&month>0)&&month<=12)
    {
        if ((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&day<=31)
        {
            std::cout<<"The day and month is valide";
        }
        else if((month==4||month==6||month==9||month==11)&&day<=30)
        {
            std::cout<<"The day and month is valid";
        }
        else if (month==2&&(day==28||day==29))
        {
            std::cout<<"The day and month is valid";
        }
        else
        {
            std::cout<<"The day and month is not valid";
        }       
    
    }
    else
    {
        std::cout<<"The day and month is not valid";
    }

    return 0;
    
}