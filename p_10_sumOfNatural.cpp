//sum of natural numbers
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter n value here:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
        sum += i;
    cout<<"Sum of Natural number "<<"1-"<<n<<"="<<sum<<endl;  
    return 0;
}