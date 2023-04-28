#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after swaping values in the function a=%d and b=%d\n",*a,*b);
}

int main()
{
    int a=10;
    int b=20;
    printf("before swaping the numbers a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("after swaping the numbers a=%d and b=%d\n",a,b);
return 0;
}