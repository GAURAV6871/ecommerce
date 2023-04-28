#include<iostream>
using namespace std;

int main() 
{
        // Your Code
    int n;
    cin>>n;    
     // print the upper half
    for (int i = 1; i <= n/2; i++)
        {
            // print '*'
            for (int j = 0; j <= n/2-i+1; j++) 
            {
                cout<<"*"<<"\t";
            }
 
            // print space
            for (int k = 1; k < 2*(i - 1); k++) 
            {
                cout<<" "<<"\t";
            }
 
            // print '*'
            int j = 0;
            if(i==1)
                j=1;
            
            for (; j <= n/2-i +1; j++) {
                cout<<"*"<<"\t";
            }
            cout<<endl;
        }
 
        // print the lower half
        for (int i = n/2+1; i >= 1; i--)
        {
            // print '*'
            
            
            for (int j = n/2+1;j >= i; j--) 
            {
                cout<<"*"<<"\t";
            }
 
            // print space
            for (int k = 1; k < 2*(i - 1); k++) 
            {
                cout<<" "<<"\t";
            }
 
            // print '*'
            int m = i;
          if(i==1)
              m=i+1;
            
            for (; m <=n/2 +1; m++) 
            {
                cout<<"*"<<"\t";
            }
            cout<<endl;
        }
return 0;
}