#include<iostream>
#include<vector>
using namespace std;



void plusOne(vector<int>& v)
{
    int num=0;
        int n=4;
        for(int i=0;i<n;i++)
        {
            num*=10;
            num+=v[i];
        }
        
        num=num+1;
    
        int i=n-1;
        while(num>0)
        {
            int digit=num%10;
            v[i]=digit;
            num/=10;
            i--;
        }
    
        for(int i=0;i<n;i++)
        {
            cout<<v[i];
        }
}
int main()
{
    vector<int> v(1000);
    for(int i=0;i<4;i++)
    {
        int x;
        cin>>x;
        v[i]=x;
    }
    for(int i=0;i<4;i++)
    {
        cout<<v[i];
    }
    cout<<endl;

    plusOne(v);




    /*int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }   
    
    int num=0;
    for(int i=0;i<n;i++)
    {
        num*=10;
        num+=v[i];
    }

    num=num+1;
    //cout<<num<<endl;
    //vector<int> nums(n);
    int i=n-1;
    while(num>0)
    {
        int digit=num%10;
        //cout<<digit<<" ";
        //nums.push_back(digit);
        v[i]=digit;
        num/=10;
        i--;
    }
    //cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }
    cout<<endl;

    //cout<<num<<endl;*/
return 0;
}