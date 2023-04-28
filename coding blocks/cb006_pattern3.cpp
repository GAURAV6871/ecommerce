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
        int no=1;
        while(j<=i)
        {

            cout<<no<<" ";
            j++;
            no++;
        }
        cout<<endl;
        i++;    
    }
return 0;
}