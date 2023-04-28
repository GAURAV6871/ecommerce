#include<iostream>
using namespace std;

int matrixsearch(int a[10][10],int m,int n,int target)
{
    int i,j;
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==target)
            {
                return 1;
            }
            
		}
	}
    return 0;
}

int main()
{
    int m,n;
	cin>>m>>n;
	int a[10][10],i,j;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
    int target;
    cin>>target;
    cout<<matrixsearch(a,m,n,target)<<endl;
    
return 0;
}