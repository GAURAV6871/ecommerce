#include<iostream>
using namespace std;

int main()
{
    int n,a[1000],i,num,pos=0;
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
    cout<<endl<<"enter the no from the array to be deleted"<<endl;
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(num==a[i])
        {
            for(int j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            pos++;
        }
    }   
    if(pos==0)
    {
        cout<<"element not found "<<endl;
    }
    else
    {
        cout<<"element has been deleted successfully"<<endl;
        cout<<"the new array is "<<endl;
        for(i=0;i<n-1;i++)
        {
            cout<<a[i]<<" ";
        }
    }
return 0;
}
