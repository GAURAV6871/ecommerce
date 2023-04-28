#include<iostream>
using namespace std;

int main()
{
    int digit=0;
    int n;
    cin>>n;
    while(n!=1)
    {
        int sum=0;
        int temp=n;
        while(temp>0)
        {
            digit=temp%10;
            sum+=digit*digit;
            temp=temp/10;
            
        }   
        //cout<<sum;
        n=sum; 
    }
    cout<<n<<endl;
return 0;
}