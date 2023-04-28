//insertion sort


#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"enter the size of array"<<endl;
    int a[100];
    cin>>n;
    cout<<"enter the values of arrays"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)    
    {
        //in the ith pass, place the element at the ith idx(key) to its correct pos in the sorted part of the array
        int key=a[i];
        int j=i-1;
        while(j>=0 and key<a[j])
        {
            a[j+1]=a[j];
            j--;
        } 
        a[j+1]=key;    
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;    
return 0;
}