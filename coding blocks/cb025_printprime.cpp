#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    //cout<<"2 ";
    for(int i=2;i<=n;i++)
    {

        int flag = 1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
return 0;
}