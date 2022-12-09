#include <stdio.h>
#include<string.h>
int main()
{
    char s[10];
    scanf("%s",s);
    char new[10];
    int l=strlen(s)-1;
    for(int i=0; s[i]!='\0'; i++)
    {
        new[i]=s[l];
        l--;
    }

    printf("%s\n",new);
    return 0;
}