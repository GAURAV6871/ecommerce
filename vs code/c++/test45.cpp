#include <iostream>
using namespace std;

int main() 
{
    int t,n,f,i,l,num;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        num=n;
        while(num>=10)
        {
            f=num/10;
            num=num/10;
        }
        l=n%10;
        cout<<f+l;
        cout<<endl;
    }  
}