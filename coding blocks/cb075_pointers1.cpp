//address of operator

#include<iostream>
using namespace std;

int main()
{
    int x=2;
    cout<<&x<<endl;
    int n=3;
    cout<<&n<<endl;
    double y=9;
    cout<<&y<<endl;
    y++;
    cout<<&y<<endl;
    cout<<sizeof(x)<<endl;
    char ch='a';
    cout<<sizeof(&ch)<<endl;
    cout<<&ch<<endl;
return 0;
}