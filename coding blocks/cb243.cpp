#include<iostream>
using namespace std;
int x=5;
int main()
{   
    if(x==1)
    {
        cout<<1;
        return 1;
    }
    cout<<x;
    x--;
    main();
return 0;
}