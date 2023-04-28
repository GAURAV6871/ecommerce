#include<stdio.h>

void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swaping\nthe first number is %d\nthe second number is %d\n",a,b);
}
int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}    
