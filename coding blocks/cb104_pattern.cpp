#include<iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    for (int row = 0; row < n; row++) 
    {
		for (int j = 0; j < n-1; j++)
		{
			if (j < n - row)
				cout<<"*";
			else
				cout<<" ";
		}
		for (int j = 0; j < n; j++)
		{
			if (j < row)
				cout<<" ";
			else
                cout<<"*";
		}

		cout<<endl;
	} //
	for (int row = 2; row <= n; row++) 
    {
		for (int j = 0; j < n-1; j++)
		{
			if (j < row)
				cout<<"*";
			
            else
                cout<<" ";

		}
		for (int j = 0; j < n; j++)
		{
			if (j < n - row)
				cout<<" ";
			else
				cout<<"*";
			}
            cout<<endl;
		}
return 0;
}