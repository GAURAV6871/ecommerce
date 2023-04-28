#include<iostream>
using namespace std;

void display(int a[100], int n)
{
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
}
void bubblesort(int a[10], int n,int i)
{


    if(i==n-1)
    {
        display(a,n);
        return;
    }
    for(int k=0;k<n-1;k++)
    {
        if(a[k]>a[k+1])
        {
            swap(a[k],a[k+1]);
        }
        
    }  
    bubblesort(a,n,i+1);  
    

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n,0);
    cout<<endl;
return 0;
}