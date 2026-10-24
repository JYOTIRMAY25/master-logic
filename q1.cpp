// take a number and print whether it is postive, negative and or zero
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number : "<<endl;
    cin>>num;

    if(num>0){
        cout<<"the number is postive "<<endl;
    }
    else if(num<0)
    {
        cout<<"the number is negative "<<endl;
    }
    else{
        cout<<"the number is zero "<<endl;

    }
    return 0;

}
