#include<iostream>
using namespace std;

int main()
{
    int n,flag=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<n<<" is not prime"<<endl;
            flag=0;
            break;
        }
        else
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<n<<" is prime"<<endl;
    }    
return 0;
}