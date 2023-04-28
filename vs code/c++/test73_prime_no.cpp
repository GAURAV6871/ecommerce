#include<iostream>
using namespace std;             
int main()
{
    int t,n,i,flag=0;
    cin>>t;
  while(t--)
  {
    cin>>n;
    if(n==1)
    {
        cout<<"the no is neither prime nor composite"<<endl;
    }
    if(n==2)
    {
        cout<<"the number is the only even prime no "<<endl;
    }  
    else if(n>=3)
    {
        for(i=3;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }   
        if(flag==0)
        {
            cout<<"the number is prime "<<endl;
        }  
        else  
        {
            cout<<"the no is composite"<<endl;
        }
    }    
  }
return 0;
}    