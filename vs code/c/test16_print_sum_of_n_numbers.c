#include<stdio.h>

int main()
{
    int n;
    printf("enter the limit\n");
    scanf("%d",&n);
    int sum=0,i;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("the sum upto n natural numbers is %d\n",sum);
return 0;
}    
