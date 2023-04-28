#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int s1; 
    cin>>s1;
    cout<<"displaying the unsorted string"<<endl<<s1<<endl;
    sort(s1.begin(), s1.end());
    cout<<"displaying the sorted string"<<endl<<s1<endl;
return 0;
}    