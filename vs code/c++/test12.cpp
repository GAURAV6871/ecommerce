#include<iostream>
using namespace std;
int main()
{
    //for loop
    int n,sum=0;
    cout<<"programme to initiate for loop in c++"<<endl;
    cout<<"print sum of all the natural no upto n"<<endl;
    cout<<"enter a natural no"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
        {
            sum+=i;
        }
    cout<<sum;    
    return 0;        
}