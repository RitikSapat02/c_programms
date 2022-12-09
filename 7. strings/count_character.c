#include <stdio.h>
int count(char *a,char c)
{
    int count=0;
    while(*a!='\0')
    {
        if(*a==c)
        {
            count++;
        }
        a++;
    }
    return count;
}
int main()
{
    printf("%d\n",count("gfguisrvdvshrrsv",'s'));
    return 0;
}