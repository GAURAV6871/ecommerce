#include<stdio.h>

int main()
{
    int n,i=1,prod=1;
    scanf("%d",&n);
    do
    {
        prod=n*i;
        printf("%d * %d = %d\n", n,i,prod);
        i++;
    } while (i<=10);
    printf("\n");
return 0;
}
