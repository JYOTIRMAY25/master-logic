// Check if a given year is a leap year
/*
#include<iostream>
using namespace std;

int main(){

    int year;
    cout<<"enter a year :"<<endl;
    cin>>year;

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
        cout<<"leap year"<<endl;
    }
    else{
        cout<<"not a leap year"<<endl;

    }
    return 0;
}
*/

#include<iostream>
using namespace std;

int main(){

    int year;
    cout<<"enter a year :"<<endl;
    cin>>year;

    if (year%400==0)
    {
        cout<<"this is a leap year"<<endl;
    }
    else if (year%4==0 && year%100!=0)
    {
        cout<<"this is a leap year"<<endl;    
    }
    else
    {
        cout<<" this is not a leap year"<<endl;
    }

    return 0;
}