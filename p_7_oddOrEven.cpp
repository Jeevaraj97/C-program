//check whether a number is odd number or Even number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number Here:"<<endl;
    cin>>num;
    if(num%2 == 0)
        cout<<num<<" is even number"<<endl; 
    else
        cout<<num<<" is Odd number"<<endl;
    
    return 0;
}
