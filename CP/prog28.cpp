#include<iostream>
using namespace std;

int stringtointeger(string s)
{
    int a=0;
    for(int i=0;i<s.size();i++)
    {
        a=a*10+(s[i]-'0');
    }
    return a;
}

int main()
{
    string a, b;
    cin>>a;
    cin>>b;
    int x=stringtointeger(a);
    int y=stringtointeger(b);
    cout<<x<<" "<<y<<endl;
    int sum1=0;

    cout<<(1^1)<<endl;
    
return 0;
}