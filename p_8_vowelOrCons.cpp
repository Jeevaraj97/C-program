//Find the given character is vowel or consonent character
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter character here:"<<endl;
    cin>>ch;
    if(!isalpha(ch))
        cout<<"character "<<ch<<" is not an alphabat"<<endl;
    else if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U')
        cout<<"character "<<ch<<" is a vowel character"<<endl;
    else    
        cout<<"character "<<ch<<" is a consonent"<<endl;

    return 0;
}