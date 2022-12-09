#include <stdio.h>
#include<string.h>
int main()
{
    char s[]="geeksforgeeks";
    char p[]="geeks";
    if(strncmp(s,p,strlen(p))==0)
    {
        printf("yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}