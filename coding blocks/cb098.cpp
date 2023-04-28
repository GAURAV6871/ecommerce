 #include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[1000];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int n1=0;
    for(int i=0;i<n;i++)
    {
        n1=n1*10+a[i];
    }
    
    int n2=0;
    for(int i=0;i<m;i++)
    {
        n2=n2*10+b[i];
    }
    int sum=0;
    sum=n1+n2;
    int final[1000];
	int temp=sum,count=0;
	while(temp>0)
	{
		temp=temp/10;
		count++;
	}
    for(int i=count-1;i>=0;i--)
    {
        final[i]=sum%10;
        sum=sum/10;
    }
    for(int i=0;i<count;i++)
    {
        cout<<final[i]<<", ";
    }
    cout<<"END"<<endl;   
return 0;
}