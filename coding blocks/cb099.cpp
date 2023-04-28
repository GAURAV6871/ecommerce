#include<iostream>
using namespace std;

int main() 
{
                int n;

                cin>>n;
		        int space1=n-1;
		        int space2=-1;
		        int star=1;
		        int row=1;
		        int val=1;
		        while(row<=n) 
                {
		            //space-1 ka loop
		            int i=1;
		            while(i<=space1) 
                    {
		                cout<<"  ";
		                i++;
		            }
		            //star1 ka loop
		            int j=1;
		            int p=val;
		            while(j<=star) 
                    {
		                cout<<p<<" ";
		                j++;
		                p--;
		            }
		            //space 2 ka loop
		            int k=1;
		            while(k<=space2) 
                    {
		                cout<<"  ";
		                k++;
		            }
		            //star2 ka loop
		            j=1;
		            p++;
		            if(row==1||row==n) 
                    {
		                j=2;
		            }
		            while(j<=star) 
                    {
		                cout<<p<<" ";
		                j++;
		                p++;
		            }
		            //next row ke prepration
		            if(row<=n/2) 
                    {
		                space1-=2;
		                space2+=2;
		                star++;
		                val++;
		            }
		            else 
                    {
		                space1+=2;
		                star--;
		                space2-=2;
		                val--;
		            }
		            row++;
		            cout<<endl;
		        }
return 0;
}