#include<iostream>
#include<vector>
using namespace std;



int maxProfit(vector<int>& prices)
{
    
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