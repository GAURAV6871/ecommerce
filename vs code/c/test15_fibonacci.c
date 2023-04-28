#include<stdio.h>

int main()
{
    int n;
    printf("enter the limit\n");
    scanf("%d",&n);
    int sum=0,n1=0,n2=1;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("0 ");
        }
        else if(i==1)
        {
            printf("1 ");
        }
        else
        {
            int sum=n1+n2;
            n1=n2;
            n2=sum;
            printf("%d ",sum);
        }
    }
    printf("\n");
return 0;
}    

