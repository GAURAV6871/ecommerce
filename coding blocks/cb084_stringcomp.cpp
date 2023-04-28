#include<iostream>
using namespace std;

int main()
{
    char str[1000],str1[1000];
    cin.getline(str,1000);
    cin.getline(str1,1000);
    cout<<strcmp(str,str1)<<endl;
}    

