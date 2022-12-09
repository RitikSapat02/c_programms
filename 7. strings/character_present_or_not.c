#include <stdio.h>
int occurence(char *a,char c)
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
    if(count==0)
    {
        printf("character is not present\n");
    }
    else{
        printf("character is present\n");
    }
    return count;
}
int main()
{
    printf("occurence=%d\n",occurence("gfguisrvdvshrrsv",'c'));
    return 0;
}