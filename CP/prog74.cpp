#include<iostream>
#include<vector>
using namespace std;

int reverse(int x) 
{
    vector<int> v;
    while(x>0)
    {
        int digit=x%10;
        v.push_back(digit);
        x/=10;
    }    
    int reverse=0;
    for(int i=0;i<v.size();i++)
    {
        reverse=reverse*10 + v[i]; 
    }
    return reverse;
}

int main()
{
    int n;
    cin>>n;
    cout<<reverse(n);

return 0;
}