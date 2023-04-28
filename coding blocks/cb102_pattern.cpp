#include<iostream>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    int nst = 1;
    int nsp = n - 1;
    int row = 1;
    int val = 1;
    while (row <= 2 * n - 1) 
    {
        if (row <= n) 
        {
            val = row;
        } 
        else 
        {
            val = 2 * n - row;
        }
        for (int csp = 1; csp <= nsp; csp++) 
        {
            cout<<"    ";
        }
        for (int cst = 1; cst <= nst; cst++) 
        {
            cout<<val<<"   ";
            if (cst <= nst / 2)
                val++;
            else
                val--;
        }
        cout<<endl;
        if (row < n) 
        {
            nst += 2;
            nsp--;
        } 
        else 
        {
            nst -= 2;
            nsp++;
        }
        row++;
    }
return 0;
}