#include<iostream>
#include<vector>
using namespace std;
bool isPalindrome(int x) 
    {
        
        int digit=0;
        int i=0;
        vector<int> v;

        while(x>0)
        {
            digit=x%10;
            v.push_back(digit);
            x/=10;
        }
        int n=v.size();
        int mid;
        if(n%2)
        {
            mid=n/2;
        }
        else
        {
            mid=(n+1)/2;
        }
        cout<<mid<<endl;

        int j=v.size()-1;
        for(int i=0;i<mid;i++,j--)
        {
            //cout<<v[j]<<" ";
            if(v[i]!=v[j])
            {
                return false;
            }
        }


        
        
        return true;
    }

int main()
{
    int x;
    cin>>x;
    cout<<isPalindrome(x);
return 0;
}

