#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int findComplement(int num) 
{
    int binary[32];
    int i = 0;
    
   while (num > 0)
    {
        binary[i]=num%2;
        num = num / 2;
        i++;
    }    
    for (int j=i-1;j>=0;j--)
    {
        if(binary[j]==1)
        {
            binary[j]=0;
        }
        else
        {
            binary[j]=1;
        }
    }
    int c=0;
    for (int j=i-1;j>=0;j--)
    {
        c++;
    }
    int sum=0,count=0,powof2=0;
    for (int j=0;j<c;j++)
    {   
        sum+=binary[j]*pow(2,count) ;
        count++;
    }
    return sum;
}

int main()
{
    int n; cin>>n;
    cout<<findComplement(n);

return 0;
}