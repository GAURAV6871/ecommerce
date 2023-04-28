//PRINT THE MAXIMUM PRODUCT OF THE TRIPLET IN AN ARRAY

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
    int fl=INT_MIN;
    int sl=INT_MIN;
    int tl=INT_MIN;

    int fs=INT_MAX;
    int ss=INT_MAX;
    for(i=0;i<n;i++)
    {   
        //finding the largest 3
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


        // finding 2 smallest
        if(a[i]<fs)
        {
            ss=fs;
            fs=a[i];
        }
        else if(a[i]<ss)
        {
            ss=a[i];
        }
    }
    int p1=1, p2=1;
    p1=fl*sl*tl;
    p2=fl*ss*fs;
    cout<<"maximum product is "<<max(p1,p2)<<endl;
    return 0;
}









