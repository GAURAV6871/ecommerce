#include<stdio.h>

int main()
{
    float P,T,R;
    scanf("%f %f %f", &P,&T,&R);
    printf("the simple interest will be %f\n", P*R*T/100);
    return 0;
}