#include<iostream>
using namespace std;
int i=1;
void toh(int n, char src,char dest, char hlp)
{
    if(n==0)
    {
        return;
    }
    toh(n-1,src,hlp,dest);
    cout<<"move "<<n<<"th disc from T"<<src<<" to T"<<dest<<endl;//<<" using source "<<hlp<<endl; 
    ::i++;
    toh(n-1,hlp,dest,src);
}

int main()
{
    int n;
    cin>>n;
    
    toh(n,'1','2','3');
    std::cout<<i-1<<endl;
return 0;
}