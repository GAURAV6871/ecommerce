#include<iostream>
using namespace std;
int main()
{
    int n, i, temp;
    cin >> n;
    int a[7];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    int c = 0;
    for (i = 0; i < n, c<1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] == a[i])
            {
                c++;
                cout << i;
                break;
            }
        }
    }

    return 0;
}












/*#include<iostream>
using namespace std;
int main()
{
    int n,i,temp,c=0;          
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]==a[i])
                {
                    cout<<i;
                    c++;
                    break;
                }
            }
    }    
    
return 0;
}    */