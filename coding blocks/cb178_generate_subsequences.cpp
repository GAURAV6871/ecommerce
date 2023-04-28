#include<iostream>
#include<set>
using namespace std;


void generatesubsequences(char* inp,char* out,int i,int j,set<string>& s, int &count)
{
    //base case
    if(i==0)
    {
    
        s.insert(string(out));
        count++;
        return;
    }

    //recursive case
    out[j]=inp[i];
    generatesubsequences(inp,out,i-1,j-1,s,count);
    generatesubsequences(inp,out,i-1,j,s,count);
}


int main()
{
    char inp[100];
    char out[100];
    cin>>inp;
    set<string> s;
    int count=0;
    int len=strlen(inp);
    generatesubsequences(inp,out,len,len,s,count);
    for(string str : s) 
    {
		cout << str <<" ";
	}
    cout<<endl<<count<<endl;
return 0;
}