#include<iostream>
using namespace std;

int main()
{
    int n,a[1000],i,temp,flag=0;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"the entered array is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {   
        int flag=0;
        for(int j=i+1; j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        } 
        if (flag==0)
        {
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;    
}