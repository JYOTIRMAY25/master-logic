// Check if a number lies within the range [100, 999].

#include<iostream>

int main(){

    int number;

    std::cout<<"enter the number: "<<std::endl;
    std::cin>>number;

    if (number>=100&&number<=999)
    {
        std::cout<<"the nuber lies b/w 100 to 999"<<std::endl;
    }
    else
    {
        std::cout<<"the number does not lies b/w 100 to 999"<<std::endl;
    }
    return 0;
    
}