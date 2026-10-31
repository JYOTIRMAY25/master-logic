// Take a day number (1–7) and print the corresponding day name. 

#include<iostream>

int main(){

    int days;
    std::cout<<"enter the days number :"<<std::endl;
    std::cin>>days;

    if(days>=1&&days<=7)
    {
        if (days==1)
        {
            std::cout<<"the day is sunday"<<std::endl;
        }
        else if (days==2)
        {
            std::cout<<"the day is monday"<<std::endl;
        }
        else if (days==3)
        {
            std::cout<<"the day is tuesday"<<std::endl;
        }
        else if (days==4)
        {
            std::cout<<"the day is Wednesday"<<std::endl;
        }
        else if (days==5)
        {
            std::cout<<"the day is Thursday"<<std::endl;
        }
        else if (days==6)
        {
            std::cout<<"the day is friday"<<std::endl;
        }
        else{
            std::cout<<"the day is Saturday"<<std::endl;
            
        }
      
    }
    else{
        std::cout<<"enter valid days number"<<std::endl;
    }

    return 0;
}