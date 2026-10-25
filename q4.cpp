// Check if a number is divisible by both 3 and 5. 
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;

    if(n%3==0 && n%5==0){
        cout<<"the enrted number is divible by 3 and 5 "<<endl;
    }
    else{
        cout<<"the enrted number is not divible by 3 and 5 "<<endl;
    }
    return 0;

}