#include<iostream>
using namespace std;

int main()
{
   long long int n;
   int num=0,num1=0;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   long int m;
    cin>>m;
    long int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    
    for (int i=0;i<n;i++)
    {
        num=num*10+a[i];
        
    }
     for (int i=0;i<m;i++)
    {
        
        num1=num1*10+b[i];
    }
    int sum=0;
    sum=num+num1;
    //cout<<sum<<endl;

    int rev_num = 0;
    while (sum > 0) 
    {
        rev_num = rev_num * 10 + sum % 10;
        sum = sum / 10;
    }
    //cout<<rev_num<<endl;
    int digit=1;
    while(rev_num)
    {
        digit=rev_num%10;
        cout<<digit<<", ";
        rev_num=rev_num/10;
    }
    cout<<"END";
return 0;    
}