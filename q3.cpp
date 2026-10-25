//  Check if a number is divisible by 5. 
#include<iostream>
using namespace std;
 int main(){

    int n; 
    cout<<"enter the number : "<<endl;
    cin>>n;

    if(n%5==0){
        cout<<"the number is divisible by 5 "<<endl;
    }
    else{
        cout<<"the number is not divisible by 5"<<endl;
    }

    return 0;
    
}
