#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {   
        int n;
        cin>>n;
        int rose[1000];
        for(int i=0;i<n;i++)
        {
            cin>>rose[i];
        }
        int m;
        cin>>m;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(rose[j]>rose[j+1])
                {
                    swap(rose[j],rose[j+1]);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<rose[i]<<" ";
        }
        cout<<endl;
        int flag=0,diff;
        for(int i=0;rose[i]<=m/2;i++)
        {   
            diff=0;
            diff=m-rose[i];
            for(int j=0;j<n;j++)
            {
                if(diff!=rose[j])
                {
                    flag=1;
                }
            }
            if(flag==1)
            {
                rose[i]=-1;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<rose[i]<<" ";
        }
        cout<<endl;
        int max=INT_MIN;
        for(int i=0;rose[i]<=m/2;i++)
        { 
            if(rose[i]>max)
            {
                max=rose[i];
            }
        }    
        cout<<endl<<"maximum value in half array is"<<max;   
        cout<<endl;
    }
return 0;
}