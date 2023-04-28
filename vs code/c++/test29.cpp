#include<iostream>
using namespace std;

int main()
{
    char name[10];
    int l;
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<endl<<"hello "<<name<<endl;
    l=strlen(name);
    cout<<"the length of the string is "<<l<<endl;
    return 0;
}