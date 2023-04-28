#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],mul[10][10],m,n,i,j,k;
    printf("enter the no of rows\n");
    scanf("%d",&m);
    printf("enter the no of columns\n");
    scanf("%d",&n);
    printf("enter the enteries of first matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the enteries of second matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            mul[i][j]=0;
            for(k=0;k<n;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("the multipliation mtrix is printed as\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}