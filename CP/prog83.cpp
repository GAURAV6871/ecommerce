#include<iostream>
#include<vector>
using namespace std;

int main()
{   
    vector<vector<int> > image;
    int n, m;
    cout<<"enter the dimensions of the matrix:"<<endl;

    cin>>n>>m;
    cout<<"enter the values of the matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        vector<int> v;
        for(int j=0;j<m;j++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
        image.push_back(v);
    } 
    cout<<"Printing the matrix..."<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        reverse(image[i].begin(), image[i].end());
    }  
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(image[i][j]==1)
            {
                image[i][j]=0;
            }
            else
            {
                image[i][j]=1;
            }
        }
    }
    cout<<"the matrix now becomes"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<image[i][j]<<" ";
        }
        cout<<endl;
    } 

return 0;
}