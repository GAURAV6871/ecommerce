#include<iostream>
using namespace std;

void replace(char* str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if(i%2==0)
		{
			str[i]++;
		}
		else
		{
			str[i]--;
		}
	}
	cout<<str<<endl;
}

int main() 
{
	char str[1000];
	cin.getline(str,1000);
	replace(str);
	return 0;
}