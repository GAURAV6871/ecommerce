#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str,str1;
    cout<<"enter the lower case string"<<endl;
    getline(cin,str);
    int l=str.size();
    //connverting to upper case
    for(int i=0;i<l;i++)
    {
        if(str[i]>='a'   && str[i]<='z')
        {
            str[i]-=32;
        }
    }
    cout<<str<<endl;



    cout<<"enter the upper case string"<<endl;
    getline(cin,str1);

    //connverting to lower case
    for(int i=0;i<l;i++)
    {
        if(str[i]>='A'   && str[i]<='Z')
        {
            str1[i]+=32;
        }
    }
    cout<<str1<<endl;

return 0;
}