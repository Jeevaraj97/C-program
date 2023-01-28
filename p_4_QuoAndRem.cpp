//find the quotent and reminder of the division 
#include<iostream>
using namespace std;
int main()
{
    int divident,divider,quotent,reminder;
    cout<<"Enter the divident value:"<<endl;
    cin>>divident;
    cout<<"Enter the divider value:"<<endl;
    cin>>divider;
    quotent = divident/divider;
    reminder = divident % divider;
    cout<<"Quotent : "<< divident<<"/"<<divider<<"="<<quotent<<endl;
    cout<<"Reminder: "<< divident<<"%"<<divider<<"="<<reminder<<endl;

return 0;
}