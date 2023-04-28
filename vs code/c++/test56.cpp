#include<iostream>
using namespace std;

int main()
{
    int n,a[1000],i,big,temp,big1;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<endl<<"enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"the entered array is "<<endl;
    for(i=0;i<n;i++)  
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++)  
    {
        big=a[0];
        if(a[i]>big)
        {
            big=a[i];
        }   
    }
    cout<<"the biggest no in the array is "<<big<<endl;
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)  
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++)  
    {
        big1=a[1];
    }
    cout<<"the second largest no of the array is "<<big1<<endl;
return 0;
}    
    

