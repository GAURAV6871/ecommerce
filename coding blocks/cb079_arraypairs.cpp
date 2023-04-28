//array sum pairs using 2 pointer approach

/*step 1: sort the array
  step 2: i=0;j=n-1
  add i & j
  while(i<=j)
  {
    if(a[i]+a[j]== target)
    {
      count++;
      i++;
      j--;
    }
    else if(a[i]+a[j]>target)

    {
      j--;
    }
    else if(a[i]+a[j]<target)

    {
      i++;
    }
  }
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n); //inbuily function for sorting an array in nlog(n) time complexity
    for(int i=0;i<n;i++)
    {
        cout<< a[i]<<" ";
    }
    int i=0,j=n-1; 
    int target,count=0;
    cin>>target;
        

    while(i<=j)
    {
        if(a[i]+a[j]== target)
        {
            count++;
            i++;
            j--;
        }
        else if(a[i]+a[j]>target)
        {
            j--;
        }
        else if(a[i]+a[j]<target)
        {
            i++;
        }
    }
    cout<<count<<endl;
    
return 0;
}