// Take coordinates (x, y) and check if the point lies on the X-axis, Y-axis, or at the origin.

#include<iostream>

int main()
{

    double x, y;
    std::cout<<"Enter the coordinates: "<<std::endl;

    std::cin>>x;
    std::cin>>y;

    if (x==0&&y==0)
    {
        std::cout<<"this is an Origin"<<std::endl;
    }
    else if (x==0)
    {
        std::cout<<"this is a point on Y-axis"<<std::endl;
    }
    else if (y==0)
    {
        std::cout<<"this is a point on X-axis"<<std::endl;
    }
    else
    {
        std::cout<<"this is a point in the plane"<<std::endl;
    }
    
    return 0;

}

