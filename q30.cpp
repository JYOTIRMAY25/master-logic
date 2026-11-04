// Check whether a number is a perfect square (without using the square root function). 

#include<iostream>
   
int main(){

    int num;

    std::cout << "Enter the number: " << std::endl;
    std::cin >> num;

    if (num<0){
        std::cout<<"invaild number"<<std::endl;

    }
    else{
        
        int i = 0;

        while (i*i<=num)
        {
            if (i*i==num)
            {
                std::cout<<"perfect square "<<std::endl;
                break;
            }
            i++;            
        }
        if (i*i!=num)
        {
            std::cout << "The number is not a perfect square" << std::endl;
        }

        
        
    }
    return 0;
}
      
   
    
