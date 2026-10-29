// if the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene

#include<iostream>

int main(){

    int a,b,c;

    std::cout<<"enter the first side"<<std::endl;
    std::cin>>a;

    std::cout<<"enter the second side"<<std::endl;
    std::cin>>b;

    std::cout<<"enter the third side"<<std::endl;
    std::cin>>c;

    if (a>0&&b>0&&c>0)
    {
        if (a==b&&b==c&&c==a){
            std::cout<<"it is an Equilateral triangle"<<std::endl;
        }
        else if (a==b||b==c||c==a){
            std::cout<<"it is an Isosceles triangle"<<std::endl;
        }
        else{
            std::cout<<"it is an Scalene triangle"<<std::endl;
        }
    }
    else{
        std::cout<<"not Valid Triangle"<<std::endl;

    }
    return 0;


}