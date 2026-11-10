// Take a number and print “Fizz” if divisible by 3, “Buzz” if divisible by 5, and "FizzBuzz” if divisible by both.

#include <iostream>

int main(){

    int number;
    std::cout<<"enter the number :"<<std::endl;
    std::cin>>number;

    if (number%3==0&&number%5==0)
    {
        std::cout<<"FizzBuzz"<<std::endl;
    
    }
    else if (number%3==0)
    {
        std::cout<<"Fizz"<<std::endl;
    }
    else if (number%5==0)
    {
        std::cout<<"Buzz"<<std::endl;
    }
    else
    {
        std::cout<<"number is not divisible by 3 and 5"<<std::endl;
    }
    
    return 0;
    
}