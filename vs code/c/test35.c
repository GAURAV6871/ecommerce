#include<stdio.h>

int main()
{
    char str[100];
    char *p;
    int vowel=0,consonant=0;
    printf("enter the string\n");
    fgets(str,100,stdin);
    p=str;
    while(*p!='\0')
    {
        if(*p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U' || *p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
        {
            vowel++;
        }
        else if(*p==' ')
        {
        }
        else
        {
            consonant++;
        }
        p++;
    }
    printf("the number of vowels is %d\n",vowel);
    printf("the number of consonants is %d\n",consonant-1);
return 0;
}