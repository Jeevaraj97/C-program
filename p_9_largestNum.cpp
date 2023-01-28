//Find the largest number amoung three number
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter number 1,2,and 3:"<<endl;
    cin>>num1>>num2>>num3;
//method-1 else if ladder    
/*    if((num1>=num2)&&(num1>=num3))
        cout<<num1<<" is a largest number"<<endl;
    else if((num2>=num1)&&(num2>=num3))
        cout<<num2<<" is a largest number"<<endl;
    else
        cout<<num3<<" is a largest number"<<endl;
*/
//method-2 nested if else
    if(num1>=num2)
    {
        if(num1>=num3)
            cout<<num1<<" is a largest number"<<endl;
        else
            cout<<num3<<" is a largest number"<<endl; 
    }
    else
    {
        if(num2>=num3)
            cout<<num2<<" is a largest number"<<endl;
        else
            cout<<num3<<" is a largest number"<<endl; 
    }
return 0;
}