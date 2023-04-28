//PRINT 3 LARGEST ELEMENTS IN THE ARRAY

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,i,j,m,flag=0;
    cout<<"enter the size of array"<<endl;
    int a[100];
    cin>>n;
    cout<<"enter the values of arrays"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int fl=INT_MIN,sl=INT_MIN,tl=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]>fl)
        {
            tl=sl;
            sl=fl;
            fl=a[i];
        }
        else if(a[i]>sl)
        {
            tl=sl;
            sl=a[i];
        }
        else if(a[i]>tl)
        {
            tl=a[i];
        }
    }
    cout<<fl<<" "<<sl<<" "<<tl<<endl;
    return 0;
}









