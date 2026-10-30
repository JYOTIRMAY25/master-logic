// Take the hour of the day (0–23) and print “Good Morning”, “Good Afternoon”, “Good Evening”, or “Good Night”.

#include<iostream>

int main(){

    int hr;
    std::cout<<"enter the hours :"<<std::endl;
    std::cin>>hr;

    if (hr>=0&&hr<=23)
    {
        if (hr>=5&&hr<=11)
        {
            std::cout<<"Good Morning"<<std::endl;
        }
        else if (hr>=12&&hr<=16)
        {
            std::cout<<"Good Afternoon"<<std::endl;
        }
        else if (hr>=17&&hr<=20)
        {
            std::cout<<"Good Evening"<<std::endl;
        }
        else
        {
            std::cout<<"Good Night"<<std::endl;
        }
        
    }
    else
    {
        std::cout<<"enter valid hours"<<std::endl;
    }
    return 0;
    
}