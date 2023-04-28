#include<stdio.h>

int main()
{
    int n;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    int j,i;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
return 0;
}    