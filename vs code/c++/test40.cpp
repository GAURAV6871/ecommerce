#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n, H, x, y, C, W;
    string first="yes";
    string second="no";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> H >> x >> y >> C;
        W = H * (x + (y / 2));
        if (W < C)
        {
            cout<<first;

        }
        else 
            cout<<second;
 
    }
return 0;
}