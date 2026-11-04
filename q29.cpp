// Take two angles of a triangle and compute the third angle

#include <iostream>

int main(){

    int angle1,angle2;
    std::cout<<"enter the first angle: "<<std::endl;
    std::cin>>angle1;
    std::cout<<"enter the second angle: "<<std::endl;
    std::cin>>angle2;

    if (angle1<=0||angle2<=0)
    {
        std::cout<<"Invalid angle"<<std::endl;
    }
    else if (angle1+angle2>=180)
    {
        std::cout<<"Invalid angle"<<std::endl;
    }
    else
    {
        int angle3=180-(angle1+angle2);
        std::cout<<"the third angle is: "<<angle3<<std::endl;
    }

    return 0;
  

}