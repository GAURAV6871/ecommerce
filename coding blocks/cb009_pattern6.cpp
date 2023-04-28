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
        int no;
        if(i%2==0)
        {
            no=0;
        }
        else
        {
            no=1;
        }    
        while(j<=i)
        {

            cout<<no<<" ";
            j++;
            no=1-no;
        }
        cout<<endl;
        i++;    
    }
return 0;
}