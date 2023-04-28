#include<iostream>
#include<cstring>
using namespace std;
int main() 
{
	char str[1000];
	cin.getline(str,1000);
	int n=strlen(str);
	for(int i=0;i<=n-2;i++)
	{
		int diff=0;
			diff=str[i+1]-str[i];
			cout<<str[i]<<diff;
	}
    cout<<str[n-1];
	cout<<endl;

	return 0;
}