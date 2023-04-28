#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    int num=0;
    int j=0;
    for(int i=s1.length()-1;i>=0;i--,j++)
    {
        num+=s1[i]*pow(2,j);
    }
    cout<<num<<endl;
return 0;
}