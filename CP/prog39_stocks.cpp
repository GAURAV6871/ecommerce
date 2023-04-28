#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int maxProfit(vector<int>& prices) 
{
    int min=INT_MAX;
    int max=INT_MIN;
    int i;
    int temp;
    int prevmin=INT_MAX;
    for(i=0;i<prices.size();i++)
    {
        if(prices[i]<min)
        {
            min=prices[i];
            temp=i;
            cout<<min<<" "<<temp<<endl;
        }
    }
    //cout<<endl<<min<<endl;
    cout<<temp;
    if(temp==prices.size()-1)
    {
        return 0;
    }
        
    for(int j=temp+1;j<prices.size();j++)
    {
        if(prices[j]>max)
        {
            max=prices[j];
        }
    }    
    //cout<<max<<endl;  
    return max-min;        
}

int main()
{
    vector<int> prices;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        prices.push_back(x);
    }
    
    cout<<maxProfit(prices)<<endl;
return 0;
}