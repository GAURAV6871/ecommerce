#include<iostream>
using namespace std;

void printonetwo(int n)
{

    int a;
    //base case
    if(n==0)
    {
        return ;
        
    }
    //cout<<n<<endl;
    a=n%10;
    printonetwo(n/10);
    //cout<<a<<endl;
    if(a==1)
    {
        cout<<"one ";
    }
    else if(a==2)
    {
        cout<<"two ";
    }
    else if(a==3)
    {
        cout<<"three ";
    }
    else if(a==4)
    {
        cout<<"four ";
    }
    else if(a==5)
    {
        cout<<"five ";
    }
    else if(a==6)
    {
        cout<<"six ";
    }
    else if(a==7)
    {
        cout<<"seven ";
    }
    else if(a==8)
    {
        cout<<"eight ";
    }
    else if (a==9)
    {
        cout<<"nine ";
    }
    else if(a==0)
    {
        cout<<"zero ";
    }
    
}    
int main()
{
    int n;
    cin>>n;
    //cout<<"entered number is "<<n<<endl;
    printonetwo(n);
return 0;
}