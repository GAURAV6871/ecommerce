#include<iostream>
using namespace std;

int main() 
{
	int n,seq=1;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        seq=3*i+2;
        if(seq%4!=0)
        {
            cout<<seq<<" ";
            i++;
        } 
        seq=1;
    }
    cout<<endl;
}
