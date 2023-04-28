#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int flag=1;
    cin>>str;
    int l=str.size();

    for(int i=0;i<l;i++)
    {
        if(str[i]!=str[l-1-i])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"pallindrome"<<endl;
    }
    else
    {
        cout<<"not a pallindrome"<<endl;
    }
return 0;
}