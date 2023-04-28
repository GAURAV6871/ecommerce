#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
        {
            s[i]="FizzBuzz";
            cout<<s[i]<<",";
        }
        else if(i%3==0)
        {
            s[i]="Fizz";
            cout<<s[i]<<",";
        }
        else if(i%5==0)
        {
            s[i]="Buzz";
            cout<<s[i]<<",";
        }

        else
        {
            s[i]=i;
            cout<<s[i]<<",";
        }
    }
return 0;
}