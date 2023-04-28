#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch='A';
    for(int i=n;i>=1;i--)
    {
        ch='A';
        for(int j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        ch=ch-1;
        for(int k=i;k>=1;k--)
        {
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }
return 0;
}