// Take coordinates (x, y) and determine which quadrant the point lies in. 

#include<iostream>

int main(){

    int x;
    std::cout<<"enter the x coodinate :"<<std::endl;
    std::cin>>x;

    int y;
    std::cout<<"enter the y coodinate :"<<std::endl;
    std::cin>>y;

    if (x > 0 && y > 0)
    {
        std::cout<<"it's is in first Quadrant"<<std::endl;
    }
    else if (x < 0 && y > 0)
    {
        std::cout<<"it's is in second Quadrant"<<std::endl;
    }
    else if (x < 0 && y < 0)
    {
        std::cout<<"it's is in third Quadrant"<<std::endl;
    }
    else if (x > 0 && y < 0)
    {
        std::cout<<"it's is in fourth Quadrant"<<std::endl;
    }
    else if (x == 0 && y == 0)
    {
        std::cout<<"it's is at the origin"<<std::endl;
    }
    else if (x == 0)
    {
        std::cout<<"it's is on the y-axis"<<std::endl;
    }
    else if (y == 0)
    {
        std::cout<<"it's is on the x-axis"<<std::endl;
    }
    else
    {
        std::cout<<"invalid input"<<std::endl;
    }

    return 0;
        
}