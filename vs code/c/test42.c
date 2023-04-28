#include<stdio.h>

int main()
{
    int arr[100],n,i,*ptr=arr;
    printf("enter the size of the array\n");
    scanf("%d", &n);
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&i);
        ptr++;
    }
    ptr=arr;
    for(i=0;i<n;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}