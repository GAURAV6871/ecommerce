#include<iostream>
using namespace std;
int main()
{
    //for loop
    int n,i;
    cout<<"programme to write table of 6 using for, while, do while loop c++"<<endl;
   
   
    cout<<"1.) using for loop"<<endl;
    for(i=1; i<=10; i++)
        {
            cout<<"6 * "<<i<<" = "<<i*6<<endl;
        }
    
    
    
    
    cout<<endl<<endl<<"2.) using while loop"<<endl;
    i=1;
    while(i<=10)
    {
        cout<<"6 * "<<i<<" = "<<i*6<<endl;
        i++;
    }
   
   
    i=1;
    cout<<endl<<endl<<"3.) using do-while loop"<<endl;
    do
    {
        cout<<"6 * "<<i<<" = "<<i*6<<endl;
        i++;
    }while(i<=10);
   
    return 0;  
}