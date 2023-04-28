#include<iostream>
using namespace std;

int main()
{
    int count=0;
    char ch;
    /*do
    {
        cin>>ch;
        count++;
    }while(ch!='$');
    cout<<count-1<<endl;
*/

    while(true)
    {
        ch=cin.get();
        if(ch=='$')
        {
            break;
        }
        count++;
    }
    cout<<count<<endl;
return 0;
}