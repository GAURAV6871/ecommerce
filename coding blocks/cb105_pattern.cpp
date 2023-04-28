#include<iostream>
using namespace std;

int main()
{     
    int rows;
    cin>>rows;
    int i, j; 
    for (i=1; i<=rows; i++) 
    { 
       // Print trailing spaces 
       for (j=1; j<=rows - i; j++) 
           cout<<" "; 
          
       // Print stars after spaces 
       // Print stars for each solid rows 
       if (i==1 || i==rows) 
           for (j=1; j<=rows; j++) 
               cout<<"*"; 
              
       // stars for hollow rows 
       else
           for (j=1; j<=rows; j++) 
               if (j==1 || j==rows) 
                   cout<<"*"; 
               else
                   cout<<" "; 
       // Move to the next line/row 
       cout<<endl;
   } 
}