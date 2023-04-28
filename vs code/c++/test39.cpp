#include <iostream>
using namespace std;
int main()
{
    long long d[100000];
    for (long long n=1; n < 100000; n++)
    {
        for (long long i = 1; i <= n; i++)
        {
            d[n] = 0;
            if (n % i == 0)
            {
                d[n] = d[n] + i;
            }

        }
    }
    long long m;
    cin >> m;
    long long arr[10000];
    long long ans[10000];
    for (long long i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < 100000; j++)
        {
            if (arr[i] == d[j])
            {
                ans[i] = j;
            }
            else ans[i] = -1;
        }
    }
    for (long long i = 0; i < m; i++)
    {
        cout << ans[i] << endl;
    }return 0;
}