#include<iostream>
using namespace std;

int main()
{
    int n,a[10]={1,2,3,4,5,6,7,8,9,10};

    cin>>n;
    if(n>=2 && n<=1000)
    {
        for(int i=9; i>=1; i--)
        {
            if(n%a[i]==0)
            {
                cout<<"the largest divisor of "<<n<<" between 1 and 10 is "<<i+1<<endl;
                break;
            }
        }
    }  
return 0;    
}