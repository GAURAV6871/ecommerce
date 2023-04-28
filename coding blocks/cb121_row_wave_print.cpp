#include<iostream>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   int a[n][m];
   for(int i=0; i< n; i++)
   {
    	for(int j=0; j< m; j++)
     	{
       		cin>>a[i][j];
     	}
	}
	int sr=0;
	int er=n-1;
	int sc=0;
	int ec=m-1;
	while(sr<=er && sc<=ec )
	{
		for(int i=sc;i<=ec;i++)
		{
    		cout<<a[sr][i]<<", ";
		}
		sr++;
		
		for(int i=ec;i>=sc;i--)
		{
    		cout<<a[sr][i]<<", ";
		}
		sr++;
	}
cout<<"END";
return 0;
}