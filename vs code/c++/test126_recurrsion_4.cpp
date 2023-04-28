#include<iostream>
using namespace std;

void increasing(int n)
{
    if(n==1)
    {
        cout<<"1 ";
        return;
    }
    increasing(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    increasing(n);
    cout<<endl;
    return 0;
}