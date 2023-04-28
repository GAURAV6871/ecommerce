#include<stdio.h>

int main()
{
    char s[1000],r[1000];
    int begin,end,count=0;
    printf("input a string: \n");
    fgets(s,1000,stdin);

    while(s[count]!='\0')
    {
        count++;
    }
    end=count-1;
    for(begin=0;begin<count;begin++)
    {
        r[begin]=s[end];
        end--;
    }
    r[begin]='\0';
    printf("reverse of the string: ");
    printf("%s \n",r);
    return 0;
}