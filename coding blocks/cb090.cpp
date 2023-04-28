#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[1000];
    cout<<"enter the values of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int final[n];
    for(int i=0;i<n;i++)
    {
        int temp=1;
        for(int j=0;j<n;j++)
        {
            temp=temp*a[j];
        }
        final[i]=temp/a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<final[i]<<" ";
    }
    cout<<endl;

return 0;
}