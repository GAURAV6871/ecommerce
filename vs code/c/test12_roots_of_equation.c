#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("enter the coefficients and constant of the quadratic equation.\n ");
    scanf("%d%d%d",&a,&b,&c);
    printf("the quadratic equation will be %dx^2 + %dx + %d\n", a,b,c);
    float d=1,root1=1,root2=1;
    d=(b*b)-(4*a*c);
    if(d<0)
    {   
        printf("no real roots\n");
    }
    else
    {
        root1=(-b+sqrt(d))/2*a;
        root1=(-b-sqrt(d))/2*a;
        printf("the square roots of the equation are %f and %f\n",root1,root2 );
    }
return 0;
}