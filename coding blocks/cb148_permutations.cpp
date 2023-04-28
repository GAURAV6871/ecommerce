#include<iostream>
using namespace std
void generatepermutations(char *inp, int i)
{
    if(inp[i]=='\0')
    {
        cout<<inp<<endl;
        return;
    }
    for(int j=i;j<strlen(inp);    j++)
    {cn
        swap(inp[i],inp[j]);
        generatepermutations(inp,i+1);
        swap(inp[i],inp[j]);
    }
}
int main()
{
    char inp[100]="abc";
    generatepermutations(inp,0);
return 0;
}