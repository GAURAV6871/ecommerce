#include <iostream>

using namespace std;

int main() {
long t;
int n=0;
cin>>t;
 int s[t];
for(long i = 0;i<t;i++)
{
  cin>>s[i];
  
}

char ch[10];
int m;
for(long i=0;i<t;i++)
{ m=s[i];
    while(m!=0)
    {
    m=m/10;
    n++;
    }
   for(int j = 0;j<n;j++){
       ch[j]=s[i]%10;
       s[i]=s[i]/10;
   }
   int c=0;
   for(int j = 0;j<n;j++){
       if(ch[j]==4){
           c++;
       }
   }
   cout<<c<<endl;
}// your code goes here
	return 0;
}