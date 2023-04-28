#include<iostream>
using namespace std;

int main()
{
    int n,flag=0;
    cout<<"enter a number "<<endl;
    cin>>n;
    if(n==1)
    {
        cout<<"entered no is neither prime nor composite"<<endl;
    }
    else
    {
        int i=2;
        while(i<=n/2)
        {
            if(n%i==0)
            {
                flag=1;
            }
            i++;
        }
        if(flag==0)
        {
            cout<<"entered number is prime"<<endl;
        }
        else
        {
            cout<<"entered number is not prime"<<endl;
        }
    }    
return 0;
}