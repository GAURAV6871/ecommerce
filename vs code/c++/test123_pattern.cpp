#include<iostream>
using namespace std;
int main()
{
    int n, s, i, j;
    cin >> n;
    for(i = 1; i <= n/2+1; i++)
    {
        for(s = i; s < n; s++)
        {
            cout << " ";
        }
        for(j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for(i = n/2; i >= 1; i--)
    {
        for(s = i; s < n; s++)
        {
            cout << " ";
        }
        for(j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
return 0;    
}