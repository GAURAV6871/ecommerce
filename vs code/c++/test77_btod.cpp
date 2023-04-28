#include<iostream>
using namespace std;

int binary_to_decimal(int n)
{
    int x=1,ans=0;
    while(n>0)
    {  
        int y=n%10;
        ans+=x*y;
        x=x*2;
        n=n/10;
    }
    return ans;
}


int octal_to_decimal(int n)
{
    int x=1,ans=0;
    while(n>0)
    {  
        int y=n%10;
        ans+=x*y;
        x=x*8;
        n=n/10;
    }
    return ans;
}




 
int main()
{
    int binary,octal,decimal,decimal1;
    cout<<"enter the binary no "<<endl;
    cin>>binary;
    decimal=binary_to_decimal(binary);                      //calling function to convert octal no to decimal no
    cout<<"enter the octal no "<<endl;
    cin>>octal;
    decimal1=octal_to_decimal(octal);                       //calling function to convert octal no to decimal no
    
    cout<<"the binary to decimal conversion results in "<<decimal<<endl;
    cout<<"the octal to decimal conversion results in "<<decimal1<<endl;
}