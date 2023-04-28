#include<iostream>
#include<cstring>
using namespace std;

void removeduplicates(char* str)
{
    int index = 0;  
    int n=strlen(str);
   for (int i=0; i<n; i++) 
   {     
        int j;
        for (j=0; j<i; j++)
        {
            if (str[i] == str[j])
            {
                break;
            }   
        }       
        if (j == i)
            str[index++] = str[i];
    }
    cout<<str;
}    


	
    
int main() 
{
	char str[1000];
	cin.getline(str,1000);
	removeduplicates(str);
	return 0;
}