#include<iostream>
#include<string> 
#include<vector>  
using namespace std;

int main()

{
    int n;
    cin>>n;
    vector <string> str(n);
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    //for(int i=0;i<n;i++)
    //{
        cout<<str[0][1]-str[0][0]<<endl;
    //}
return 0;
}