// Take a character and check if it’s a vowel or consonant.

#include<iostream>

int main(){

    char x;
    std::cout<<"enter the character :"<<std::endl;
    std::cin>>x;

    if (x=='a'|| x=='e'||x=='i'||x=='o'||x=='u')
    {
        std::cout<<"the entered character is vowel"<<std::endl;
    }
    else
    {
        std::cout<<"the entered character is not a vowel"<<std::endl;
    }

    return 0; 
}