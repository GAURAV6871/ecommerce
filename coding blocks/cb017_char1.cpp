#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;
    if(ch>='A' && ch<='Z')
    {
        cout<<"upper case"<<endl;
    }
    else if(ch>='a' && ch<='z')
    {
        cout<<"lower case"<<endl;
    }
    else if(ch>='0' && ch<='9')
    {
        cout<<"digit"<<endl;
    }
    else
    {
        cout<<"special character"<<endl;
    }
    
return 0;
}