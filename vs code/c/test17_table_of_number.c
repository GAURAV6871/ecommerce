#include<stdio.h>

int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    int prod=1,i;
    for(i=1;i<=10;i++)
    {
        prod=n*i;
        printf("%d * %d = %d\n", n,i,prod);
        prod=1;
    }
return 0;
}    
