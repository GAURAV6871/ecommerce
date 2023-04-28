#include<iostream>
using namespace std;

int main()
{
    int i,n,c1=0,c2=0,c3=0;
    cout<<"enter the no upto which you want to check"<<endl;
    cin>>n;
    for(i=5;i<=n;i++)
    {
        if(i%5==0)
        {
            c1++;
        }
        if(i%7==0)
        {
            c2++;
        }
        if(i%7==0 && i%5==0)
        {
            c3++;
        }
    }
    cout<<endl<<"no of numbers divided by 5 "<<c1<<endl;
    cout<<"no of numbers divided by 7 "<<c2<<endl;
    cout<<"no of numbers divided by 5 & 7 "<<c3<<endl;
    cout<<"total no of no divided by either 5, either 7 or both "<<c1+c2-c3<<endl;
return 0;    
}