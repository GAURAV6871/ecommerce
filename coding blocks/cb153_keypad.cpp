#include<iostream>
using namespace std;

string digitmap[]={"", "", "abc","def","ghi","jkl","mno","pqrs","tuvw","xyz"};


void generatewords(char* inp, char* out, int i,int j )
{
    //base case
    if(inp[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
    }
    int d=inp[i]-'0';

    if(d==0 ||d==1)
    {
        //skip the ith digit
        generatewords(inp,out,i+1,j);
        return;
    }
    string options=digitmap[d];
    for(char c_k:options)
    {
        out[j]=c_k;
        generatewords(inp,out,i+1,j+1);
    }
}
int main()
{
    char inp[10]="23";
    char out[10];
    generatewords(inp,out,0,0);
return 0;
}