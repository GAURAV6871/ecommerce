#include<stdio.h>

int main()
{
    int n;
    int area=1;
    printf("Enter 1 for triangle\n");
    printf("Enter 2 for square\n");
    printf("Enter 3 for circle\n");
    printf("Enter 4 for rectangle\n");
    printf("Enter your choice\n");
    scanf("%d",&n);

    switch (n)
    {
    case 1:printf("enter the base and height\n");
           int h,base;
           scanf("%d %d ", &base, &h);
           area=0.5*h*base;
           printf("the area is %d\n",area);
           break;
    case 2:printf("enter the side of the square\n");
           int s;
           scanf("%d", &s);
           area=s*s;
           printf("the area is %d\n",area);
           break;
    case 3:printf("enter the radius\n");
           int r;
           scanf("%d ", &r);
           area=3.14*r*r;
           printf("the area is %d\n",area);
           break;
    case 4:printf("enter the length and breadth\n");
           int l,b;
           scanf("%d %d ", &l, &b);
           area=l*b;
           printf("the area is %d\n",area);
           break;
    default:printf("wrong input\n");
            break;
    }
return 0;
}