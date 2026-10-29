// Take three sides and check if they form a valid triangle. 

#include<iostream>

int main(){

    int a ,b,c;
    std::cout<<"enter the first side"<<std::endl;
    std::cin>>a;

    std::cout<<"enter the second side"<<std::endl;
    std::cin>>b;

    std::cout<<"enter the third side"<<std::endl;
    std::cin>>c;

    if(a>0&&b>0&&c>0){

        if (a+b>c && a+c>b && b+c>a)
        {
            std::cout<<"it is an Valid Triangle"<<std::endl;
        }
        else{
        std::cout<<" not Valid Triangle"<<std::endl;
    }
    }
     else{
        std::cout<<" not Valid Triangle"<<std::endl;
    }
    
    return 0;

}