#include<iostream>
using namespace std;

int main()
{
    char str[]="abc.def.ghi";
    char dlim[]=".";
    char* token =strtok(str,dlim);
    cout<<token<<endl;
    token =strtok(NULL,dlim);
    cout<<token<<endl;
    token =strtok(NULL,dlim);
    cout<<token<<endl;
    token =strtok(NULL,dlim);
    cout<<token<<endl;
    
return 0;
}