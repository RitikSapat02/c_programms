#include <stdio.h>
#include<string.h>

void str(char *s,int m, int n)
{
    int i=m;
    while(i<n)
    {
        printf("%c",s[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    str("Ritik",1,3);
    return 0;
}