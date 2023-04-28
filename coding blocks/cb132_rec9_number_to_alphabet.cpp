#include<iostream>
using namespace std;

string spellingmap[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};


void spell(int n)
{
    if(n==0)
    {
        return;
    }
    spell(n/10);
    cout<<spellingmap[n%10]<<" ";
    
}


int main()
{
    int n;
    cin>>n;
    spell(n);
    cout<<endl;
return 0;
}