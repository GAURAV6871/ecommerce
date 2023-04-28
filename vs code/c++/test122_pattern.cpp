#include<iostream>
using namespace std;

int main()
{
    int n;
	int totalno = 1;
	int row = 1;
    cin>>n;
    int nsp = n - 1;
	while (row <= n) 
    {
	    // space work
		int csp = 1;
		while (csp <= nsp) 
        {
			cout<<" ";
			csp++;
		}
    	// number work
		int c = 1;
		int count = row;
		while (c <= totalno) 
        {
			cout<<count;
			count++;
			c++;
		}
        cout<<endl;
		nsp--;
		totalno++;
		row++;
	}
return 0;
}        