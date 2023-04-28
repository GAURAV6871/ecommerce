#include<iostream>
using namespace std;

int main()
{
	char c;
    int count1=0,count2=0,count3=0;
    cout<<"enter the input"<<endl;
    c=cin.get();
    while(c!='$')
    {
        if(c>='a' && c<='z')
        {
            count1++;
        }
        else if(c>='0' && c<='9')
        {
            count2++;
        }
        else 
        {
            count3++;
        }
        c=cin.get();
    }
    cout<<count1<<" "<<count2<<" "<<count3<<endl;
    return 0;
}
