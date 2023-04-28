//swaping of elements in an array with the last element
#include <iostream>
using namespace std;

int main()
{
    int a[n]=10,i,element,swap,n;
    cout<<"enter the limit of the array"<<endl;
    cin>>n;
    cout<<"enter the elements of the array"<<endl;
    for (i=0;i<n;i++)
    {
        cin<<a[i]<<endl;            
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    cout<<endl;
    cout<<"enter the element no you want to swap"<<endl;
    cin>>element;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        if(element==i)
        {
            swap=a[i];
            a[i]=a[n-1];
            a[n-1]=swap;    
        }
    }
    cout<<"the array after swaping is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
 return 0;
}   