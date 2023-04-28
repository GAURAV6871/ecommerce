#include<stdio.h>

int main()
{
    char str1[1000],str2[1000],str3[1000];
    int i=0,j=0;
    printf("enter the first string: ");
    gets(str1);
    printf("enter the second string: ");
    gets(str2);
    while(str1[i]!='\0')
    {
        str3[j]=str1[i];
        i++;
        j++;
    }
    i=0;
    while(str2[i]!='\0')
    {
        str3[j]=str2[i];
        i++;
        j++;
    }
    str3[j]='\0';
    printf("\nconcatenated string: %s",str3);
    return 0;
}    

