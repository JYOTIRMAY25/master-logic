// Take a temperature value and print “Cold”, “Warm”, or “Hot” using range conditions. 

#include<iostream>

int main(){

    int temp;
    std::cout<<"enter the tmep :"<<std::endl;
    std::cin>>temp;

    if(temp<15)
    {
        std::cout<<"the temp is cold"<<std::endl;
    }
    else if (temp>=15 && temp<=29)
    {
        std::cout<<"the temp is warm"<<std::endl;
    }
    else
    {
        std::cout<<"the temp is hot"<<std::endl;
    }

    return 0;


}