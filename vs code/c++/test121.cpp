#include<iostream>
using namespace std;


int main()
{
    int i,j,n,totalno=1;
    int row = 1;
    cin>>n;
    while (row <= n) 
    {
		int c = 1;
		int count = row;
		while(c <= totalno) 
        {
			cout<<count;
			count++;
			c++;
		}
        cout<<endl;
        totalno++;
		row++;
    }	
return 0;
}    