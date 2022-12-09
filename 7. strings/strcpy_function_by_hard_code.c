#include <stdio.h>
int comp(char a[],char b[])
{

    int i=0;
    while(a[i] && b[i])
    {
        if(a[i]!=b[i])
        {
            break;
        }
        i++;
    }
    return a[i]-b[i];

}

int main()
{
    char s1[]="gfg";
    char s2[]="courses";

    printf("%d\n",comp(s1,s2));
    return 0;
}