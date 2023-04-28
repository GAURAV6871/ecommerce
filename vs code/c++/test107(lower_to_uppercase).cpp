#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    getline(sin,str);
    int l=str.size();
    for(int i=0;i<l;i++)
    {
        cout<<str[i]+32;
    }
    cout<<endl;
return 0;
}