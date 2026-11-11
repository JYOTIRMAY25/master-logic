//  Take income and age, and check if eligible for tax (age > 18 and income > 5 L).

#include <iostream>

int main(){
    
    int age;
    float income;
  
    std::cout<<"enter your age"<<std::endl;
    std::cin>>age;

    std::cout<<"enter your income (in L)"<<std::endl;
    std::cin>>income;

    
    if (income < 0 || age < 0)
    {
        std::cout << "Invalid input" << std::endl;
    }
    else if (age > 18 && income > 5)
    {
        std::cout << "You are eligible for tax" << std::endl;
    }
    else
    {
        std::cout << "You are not eligible for tax" << std::endl;
    }

    return 0;


}