#include<iostream>
using namespace std;

void count_no_of_1(int n)
{
    int count=0;
    while(n>0)
    {
        n=(n & n-1);
        count++;
    }
    cout<<count<<endl;
}

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    count_no_of_1(n);
return 0;    
}