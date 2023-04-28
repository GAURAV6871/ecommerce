#include<iostream>
using namespace std;

int main()
{
    long long int n;
    int num=0,num1=0;
    long long int sum=0;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int m;
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
    sum=num+num1;
    cout<<sum<<endl;  
    int count=0,temp=sum;
    while(temp)
    {
        temp=temp/10;
        count++;
    }
    int c=count;
    long long int arr[count];
    while(sum)
    {
        int digit=sum%10;
        arr[count-1]=digit;
        count--;
        sum=sum/10;
    }
    for(int i=0;i<c;i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<" END"<<endl;
return 0;    
}