#include <stdio.h>
#include <string.h>
void search(char*p,char*s)
{
    int m=strlen(p);
    int n=strlen(s);

    for(int i=0; i<=n-m; i++)
    {
        int j=1;
        int a=i;
        for(j=0;j<m;j++)
        {
            if(s[a]!=p[j])
            {
                break;
            }
            a++;
        }
        if(j==m)
        {
            printf("Pattern found at index %d\n",i);
        }
    }
}
int main()
{
    char s[]="ABCABC";
    char p[]="ABC";

    search(p,s);
    return 0;
}