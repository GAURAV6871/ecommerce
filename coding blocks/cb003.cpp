#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int i=1,x;
    int largestsofar=INT_MIN;
    while(i<=n)
    {
        cout<<"enter the numbers"<<endl;
        cin>>x;
        if(x>largestsofar)
        {
            largestsofar=x;
        }
        i++;
    }
    cout<<"largest of"<<n<< "numbers is "<<largestsofar<<endl;

return 0;
}