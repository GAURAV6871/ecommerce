#include<iostream>
using namespace std;
int sum(int nums[],int target, int n)
{
            for (int i = 0; i<n; i++)
            {
            for(int j = 0; j<n;j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    cout<<i<<j;
                }  
            } 
        }
}
int main()
{
    int arr[] ={1,2,3,4,5,5,6,6,5};
    int n= sizeof(arr)/sizeof(int);
    sum(arr,6,n);
    return 0;
