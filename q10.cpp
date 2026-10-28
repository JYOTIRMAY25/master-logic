//Take a character and check whether it’s uppercase, lowercase, a digit, or a special character. 

#include<iostream>

int main(){
    char value;

    std::cout<<"enter the value :"<<std::endl;
    std::cin>>value;

    if (value>='a'&& value<='z')
    {
        std::cout<<" the ented value is lowercase"<<std::endl;
    }
    else if (value>='A'&& value<='Z')
    {
        std::cout<<" the ented value is uppercase"<<std::endl;
    }
    else if (value>='0'&&value<='9')
    {
        std::cout<<" the ented value is digit"<<std::endl;
    }
    else
    {
        std::cout<<" the ented value is special character"<<std::endl;
    }
    
    return 0;
}