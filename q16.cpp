// Check voting eligibility for a given age (18+). 

#include<iostream>

int main(){

    int age;
    std::cout<<"enter the age :"<<std::endl;
    std::cin>>age;

    if (age>=0)
    {
        if (age==0)
        {
            std::cout<<"not yet born"<<std::endl;
        }
        else if(age<18)
        {
            std::cout<<"not eligible to vote"<<std::endl;
        }
        else
        {
            std::cout<<"eligible to vote"<<std::endl;
        }
        
    }
    else{
        std::cout<<"Not eligible to vote"<<std::endl;
    }
    
    return 0;

}