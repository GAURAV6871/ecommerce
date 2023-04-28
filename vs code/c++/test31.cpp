#include <iostream>
using namespace std;
void find_trailing_zeroes(long long fact,int count)
{
    int i,a[count],m=0;
    for(i=count;i>0;i--)
    {
        a[i]=fact % 10;
        fact=fact/10;
    }
    for(i=count;i>0;i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=count;a[i]==0;i--)
    {
      
            m++;
        
    }
    cout<<m;
}

int main() 
{
    int n,i,count = 0;
    long long fact=1,fac;

    cout<<"enter the no you want to find factorial of"<<endl;
    cin>>n;
    for(i=1;i<n;i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial of the no is "<<fact<<endl;
    fac=fact;
    while (fac != 0)
    {
        fac = fac / 10;
        ++count;
    }
    find_trailing_zeroes(fact,count);

return 0;
}