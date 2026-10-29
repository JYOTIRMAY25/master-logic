// Take marks (0–100) and print the corresponding grade (A/B/C/D/F).

#include<iostream>

int main()
{
    int marks;
    std::cout<<"enter the marks:"<<std::endl;
    std::cin>>marks;

    if (marks>=0 && marks<=100)
    {
        if (marks>=90)
        {
            std::cout<<"A"<<std::endl;
        }
        else if (marks>=80)
        {
            std::cout<<"B"<<std::endl;
        }
        else if (marks>=70)
        {
            std::cout<<"C"<<std::endl;
        }
        else if (marks>=60)
        {
            std::cout<<"D"<<std::endl;
        }
        else
        {
            std::cout<<"F"<<std::endl;
        }            
    }
    else
    {
        std::cout<<"enter valid marks"<<std::endl;
    }
    
    return 0;
}