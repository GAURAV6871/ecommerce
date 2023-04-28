#include<iostream>
using namespace std;

int main() 
{
	int n;
    cin>>n;
    int nst=1, nsp=n/2;	
    for (int row=1;row<=n;row++)
	{
		//spaces
		for(int csp=1;csp<=nsp;csp++)
			cout<<"\t";
		//stars
		for(int cst =1;cst<=nst;cst++)
			cout<<"*\t";
		//prep
		cout<<endl;
		if( row<=n/2)
		{
			nsp--;	
			nst+=2;
		}
		else			
		{
			nsp++;
			nst-=2;
    	}		
	}
return 0;
}