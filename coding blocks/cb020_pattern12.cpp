#include<iostream>
using namespace std;

int main()
{
    int n,a=0,b=1,c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1 && i==1)
            {
                cout<<a<<"    ";
            }
            else if(j==1 && i==2)
            {
                cout<<b<<"    ";
            }
            else
            {
                c=a+b;
                a=b;
                b=c;
                cout<<c<<"    ";
            }    
        }
        cout<<endl;
    }
return 0;
}