#include<iostream>
using namespace std;
int main()
{
    //for loop
    int n,i;
    cout<<"programme to initiate do-while loop in c++"<<endl;
    cout<<"print all the natural no upto n"<<endl;
    cout<<"enter a natural no"<<endl;
    cin>>n;
    i=1;
    do
    {
        cout<<i<<endl;
        i++;    
    } while (i<=n);
    
    return 0;        
}