#include<iostream>
using namespace std;

int main()
{
int n,m,count=0;
cout<<"enter the number"<<endl;
cin>>n;
int temp=n;
while(temp>0)
{
    temp=temp/10;
    count++;
}
int j=count;

int a[100];
while(n)
{
    int digit=n%10;
    a[count-1]=digit;
    n=n/10;
    count--;
}
cout<<"displaying the array"<<endl;
for(int i=0;i<j;i++)
{
    cout<<a[i]<<" ";
}    

int evensum=0;
int oddsum=0;

for(int i=0;i<j;i++)
{
    if(i%2==0)
    {
        oddsum=oddsum+a[i];
    }    
    else
    {
        evensum=evensum+a[i];
    }
}        


cout<<"sum of even digits is"<<oddsum;

cout<<"sum of odd digits is"<<evensum;

return 0;
}