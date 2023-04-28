#include<iostream>
using namespace std;

int product(int a,int b)
{
    if(b==0)
    {
        return 0;
    }
    b--;
    return a+ product(a,b); 
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<product(a,b)<<endl;
return 0;
}