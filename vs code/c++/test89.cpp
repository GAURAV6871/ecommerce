#include<iostream>
using namespace std;
int main()
{
    int n, i,flag=0;
    cout<<"enter the limit of the array"<<endl;
    cin >> n;
    int a[n],b[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    cout<<"the entered array is "<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            flag=1;
        }
        if(flag==1)
        {
            b[i]=a[i];
            c++;
        }
        flag=0;
    }
    for (i = 0; i < c; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;


    cout<<endl;
return 0;
}    