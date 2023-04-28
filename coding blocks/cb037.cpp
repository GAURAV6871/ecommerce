#include<iostream>
using namespace std;

int main()
{
    int l_count=0,u_count=0, special=0,digit=0,spaces=0,spec=0;
    char ch;

    while(true)
    {
        ch=cin.get();
        if(ch=='$')
        {
            break;
        }
        if(ch>='A'&&ch<='Z')
        {
            u_count++;
        }
        else if(ch>='a'&&ch<='z')
        {
            l_count++;
        }
        else if(ch>='0'&&ch<='9')
        {
            digit++;
        }
        else if(ch==' ' || ch=='\n')
        {
            spaces++;
        }
        else
        {
            spec++;
        }
    }
    cout<<u_count<<" "<<l_count<<" "<<digit<<" "<<spaces<<" "<<spec<<endl;
return 0;
}