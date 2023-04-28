#include<iostream>
using namespace std;

int main()
{
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    char a[100][100];
    for(int i=0; i<m; i++) 
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<m  &&  s>=k; i++) 
    {
        for(int j=0;j<n && s>=k;j++)
        {
            if(j==n-1)
            {
                if(a[i][j]=='.')
                {
                    s=s-2;
                }
                else if(a[i][j]=='*')
                {
                    s=s+5;
                }
            }
            else
            {
                if(a[i][j]=='.')
                {
                    s=s-3;
                }
                else if(a[i][j]=='*')
                {
                    s=s+4;
                }
                else if(a[i][j]=='#')
                {
                    break;
                }
            }    
        }
    }
    if(s>=k)
    {
        cout<<"yes"<<endl<<s<<endl;
    }
    else
    {
        cout<<"no"<<endl<<s<<endl;
    }
    
    return 0;
}
    

