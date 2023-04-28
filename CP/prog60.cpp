#include<iostream>
using namespace std;

int arrangeCoins(int n) 
{
    int row=0;
    int i=1;
    while(n>0)
    {
        if(n<i)
        {
            //row++;
            cout<<"we are at "<<row<<"th row and "<<n<<" coins are left "<<endl;
            break;
        }
        n-=i;
        row++;
        i++;
        cout<<"we are at "<<row<<"th row and "<<n<<" coins are left "<<endl;
    }    
    return row;
}

int main()
{   
    int n; cin>>n;
    cout<<arrangeCoins(n); 
return 0;
}