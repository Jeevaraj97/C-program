//Write a program to swap a two number
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n1,n2;
    int t;
    cout<<"Enter number n1:"<<endl;
    cin>>n1;
    cout<<"Enter number n2:"<<endl;
    cin>>n2;
    cout<<"Before swap::"<<endl;
    cout<<"n1: "<<n1<<"\tn2: "<<n2<<endl;    
    //method - 1 (using temp variable)
//    t = n2;
//    n2 = n1;
//    n1 = t;
    //method - 2 (without using temp variable)
    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;
    cout<<"After swap::"<<endl;
    cout<<"n1: "<<n1<<"\tn2: "<<n2<<endl;    
    return 0;
}