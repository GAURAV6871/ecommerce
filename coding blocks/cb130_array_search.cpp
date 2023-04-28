#include<iostream>
using namespace std;
//1 2 3 4 6
void search_array(int a[10],int n,int i, int target)
{
    if(a[i]==target)
    {
        cout<<i<<" ";
        return;        
    }    
    if(i==n)
    {
        cout<<-1<<" ";
        return;
    }
    search_array(a,n,i+1,target);
}

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the values of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0;
    int target;
    cout<<"enter the target"<<endl;
    cin>>target;
    search_array(a,n,i,target);
    cout<<endl;
return 0;
}