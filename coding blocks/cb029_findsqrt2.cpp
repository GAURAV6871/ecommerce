#include<iostream>
using namespace std;

int main()
{
    int n,p;
    cin>>n;
    float sqrt=0;
    float inc=1;
    cout<<"enter the no of precision places required "<<endl;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        while(sqrt*sqrt<=n)
        {
            sqrt=sqrt+inc;
        }
        sqrt=sqrt-1;
        inc=inc/10;
    }
    cout<<"square root of the number is "<<sqrt<<endl;

return 0;
}