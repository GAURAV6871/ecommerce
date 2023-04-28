#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,result=0,result1=0,count1=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 || i%10==3)
            {
                count++;
            }
        }
        result=n+count;
        for(int i=1;i<=result;i++)
        {
            if(i%3==0 || i%10==3)
            {
                count1++;
            }
        }
        result1=result+count1;
        cout<<result1<<endl;
    }
return 0;    
}