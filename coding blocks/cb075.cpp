#include<iostream>
using namespace std;

int main()
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
return 0;
}