//  Take three numbers and print the median value (neither maximum nor minimum). 

#include <iostream>

int main(){

    int a,b,c;
    std::cout<<"enter the first numbers :"<<std::endl;
    std::cin>>a;
    std::cout<<"enter the second numbers :"<<std::endl;
    std::cin>>b;
    std::cout<<"enter the third numbers :"<<std::endl;
    std::cin>>c;

    if ((a >= b && a <= c) || (a >= c && a <= b))
    {
        std::cout << "Median is: " << a << std::endl;
    }
    else if ((b >= a && b <= c) || (b >= c && b <= a))
    {
        std::cout << "Median is: " << b << std::endl;
    }
    else if ((c >= a && c <= b) || (c >= b && c <= a))
    {
        std::cout << "Median is: " << c << std::endl;
    }
    else
    {
        std::cout<<"all numbers are equal"<<std::endl;
    }

    return 0;
       
}