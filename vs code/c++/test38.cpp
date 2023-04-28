#include <iostream>
using namespace std;
int main()
{
	int t, n;
	cin >> t;
	int a[100];
	for (int m = 0; m < t; m++)
	{
		
		cin>>n;
		int ar[100];
		for (int i = 0; i < n; i++)
		{
			cin>>ar[i];
		}
		if (ar[0] == ar[1] && ar[n - 2] == ar[n - 1])
		{
			for (int i = 0; i < n - 1; i++)
			{
				if (ar[i] != ar[i - 1] && ar[i] != ar[i + 1])
				{
					a[m] = i + 1;//cout << i + 1 << endl;
				}
			}
		}
		else if (ar[0] != ar[1])
		{
			if (ar[1] == ar[2])
			{
				a[m] = 1;//cout << "1" << endl;
			}
			else a[m] = 2;//cout << "2" << endl;
		}
		else if (ar[n - 2] != a[n - 1])
		{
			if (ar[n - 2] == ar[n - 3])
			{
				a[m] = n;//cout << n << endl;
			}
			else a[m] = n - 1;//cout << n - 1 << endl;
		}

		
	} for (int m = 0; m < t; m++)
	{
		cout << a[m] << endl;
	}
	return 0;
}