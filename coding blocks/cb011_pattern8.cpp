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
        //print n-1 spaces
        int j=1;
        while(j<=n-i)
        {
            cout<<"  ";
            j++;
        }
        int k=1;
        int no=i;
        //print i stars
        while(k<=i)
        {
            cout<<no<<" ";
            no++;
            k++;
        }
        cout<<endl;
        i++;    
    }
return 0;
}