#include <stdio.h>
#include<string.h>

int main()
{
    char s1[]="geeks";
    char s2[]="gfg";
    printf("%s %s\n",s1,s2);
    printf("%zu %zu\n",sizeof(s1),sizeof(s2));
    printf("%d %d\n",strlen(s1),strlen(s2));
    return 0;
}