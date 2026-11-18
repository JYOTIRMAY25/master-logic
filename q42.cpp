// Take three numbers and check if they can form a Pythagorean triplet. 

#include<iostream>

int main(){

    int a ,b,c;
    std::cout<<"Enter three numbers: ";
    std::cin>>a>>b>>c;

     if (a > 0 && b > 0 && c > 0)
    {

    if (a*a==b*b+c*c||a*a+b*b==c*c||b*b==a*a+c*c)
    {
        std::cout<<"the number Pythagorean triplet"<<std::endl;
    }
    else
    {
        std::cout<<"the number is not a Pythagorean triplet"<<std::endl;
    }
}
else
    {
        std::cout << "Please enter positive numbers." << std::endl;
    }

    return 0;
        
}