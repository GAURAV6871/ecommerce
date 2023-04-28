#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cin.ignore();
    char a[n+1];
    int currlen=0, maxlen=0;
    cout<<"enter the array"<<endl;
    cin.getline(a,n);
    cin.ignore();
    int i=0;
    while(1)
    {
        if(a[i]==' '   ||    a[i]=='\0')
        {
            if(currlen>maxlen)
            {
                maxlen=currlen;
            }
            currlen=0;
        }
        else
        { 
            currlen++;
        }    
        if(a[i]=='\0')
        {
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;
return 0;
}