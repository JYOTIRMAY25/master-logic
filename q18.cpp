// Take an alphabet character and check if it lies between ‘a’ and ‘m’ or ‘n’ and ‘z’.

#include<iostream>

int main(){

    char ch;

    std::cout<<"enter the character :"<<std::endl;
    std::cin>>ch;

    if ((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
        if (ch>='a'&& ch<='m')
        {
            std::cout<<"the character lies between a and m"<<std::endl;
        }
        else if (ch>='n'&&ch<='z')
        {
            std::cout<<"the character lies between n and z"<<std::endl;
        }   
        else if(ch>='A'&&ch<='M')
        {
            std::cout<<"the character lies between A and N"<<std::endl;
        }
         else if (ch>='N'&&ch<='Z')
        {
            std::cout<<"the character lies between N and Z"<<std::endl;
        } 
        else{
            std::cout<<"the character does not lie between a and m or n and z"<<std::endl;
        }
        
    }
    else
    {
        std::cout<<"enter valid character"<<std::endl;
    }
    
    return 0;
}