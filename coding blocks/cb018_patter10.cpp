#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<j<<" ";
            j++;
        }
        int k=1;
        while(k<=n-i)
        {
            cout<<"* ";
            k++;
        }
        cout<<endl;
        i++;    
    }
return 0;
}