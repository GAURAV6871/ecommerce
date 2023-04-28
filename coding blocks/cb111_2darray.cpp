#include<iostream>
using namespace std;

int main()
{
    int a[3][4]={{10,20,30,40},
                 {50,60,70   },
                 {80,90},
                 {90,100}};
                 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}