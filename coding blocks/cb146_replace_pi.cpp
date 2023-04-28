#include<iostream>
using namespace std;

void replacepi(char* inp, int i)
{
    if(inp[i]=='\0')
    {
        cout<<inp<<endl;
        return;
    }
    if(inp[i]=='p' && inp[i+1]=='i')
    {
        int j=i+2;
        while(inp[j] != '\0') 
        {
			j++;
		}
        while(j >= i+2) 
        {
			inp[j+2] = inp[j];
			j--;
		}
        inp[i] = '3';
		inp[i+1] = '.';
		inp[i+2] = '1';
		inp[i+3] = '4';


        replacepi(inp, i+4); 
    }
    else
    {
        replacepi(inp,i+1);
    }
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char inp[201];
        cin>>inp;
        replacepi(inp,0);
    }    
return 0;
}
