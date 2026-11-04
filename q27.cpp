// Check if an amount can be evenly divided into 2000, 500, and 100 currency notes. 

#include<iostream>

int main(){


    int amount;
    std::cout << "Enter the amount: " << std::endl;
    std::cin >> amount;

    
    if (amount < 0)
    {
        std::cout << "Invalid amount" << std::endl;
    }
    else if (amount % 2000 == 0 && amount % 500 == 0 && amount % 100 == 0)
    {
        std::cout<<"the amout is divisable by 2000,500 and 100"<<std::endl;
    }
    else
    {
        std::cout<<"the amout is not divisable by 2000,500 and 100"<<std::endl;
    }
    return 0;
    
}