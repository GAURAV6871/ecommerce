#include<iostream>
using namespace std;

int main()
{
    int a[100][100],i,j,n,m;
    cout<<"enter the no of rows"<<endl;
    cin>>m;
    cout<<"enter the no of columns"<<endl;
    cin>>n;
    cout<<"enter the elements of the matrix"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }    
    }
    cout<<"the entered matrix is "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }    
        cout<<endl;
    }
    cout<<endl;
    /*int k = 0, l = 0;
    while(k < m && l < n)
    {
        for(i = l; i < n; i++)
        {
            cout << arr[k][i] << ” “;
        }
        k++;
        for(i = k; i < m; i++)
        {
            cout << arr[i][n-1] << ” “;
        }
        n–;
        if(k < m)
        {      
            for(i = n – 1; i >= 0; –i)
            {
                cout << arr[m-1][i] << ” “; 
            }
            m–;
        }
        if(l < n)
        {
            for(i = m – 1; i >= k; i–)
            {
                cout << arr[i][l] << ” “;
            }
            l++;
        }
    }
cout << endl;*/
return 0;
}


    

