#include<iostream>
using namespace std;

void print(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<"_"; // print n to 1 
    print(n-1);
    cout<<n<<"-";  //print 1 to n
}

int main()
{
    int n=5;

    print(n);
    cout<<endl;
return 0;
}