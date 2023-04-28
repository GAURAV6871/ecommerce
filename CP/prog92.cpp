#include<iostream>
using namespace std;
void countNumbersWithUniqueDigits(int n) 
    {

        if(n==0)
        {
            cout<<1;
        }
        
        int right=pow(10,n)-1;
        cout<<right<<endl<<endl;
        int count=0;
        for(int i=1;i<=right;i++)
        {
            if(i%11==0)
            {
                count++;
                cout<<i<<endl;
            }
        }

        cout<<right-count+1;
    }

int main()
{
    int n; cin>>n;
    countNumbersWithUniqueDigits(n);

return 0;
}