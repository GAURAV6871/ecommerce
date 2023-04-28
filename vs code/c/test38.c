#include<stdio.h>

int main()
{
    int i,j;
    int first[2][2],second[2][2],sum[2][2];
    printf("enter the enteries of first matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&first[i][j]);
        }
    }
    printf("enter the enteries of second matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&second[i][j]);
        }
    }
    printf("the sum of the 2 matrix is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum[i][j]=first[i][j]+second[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}