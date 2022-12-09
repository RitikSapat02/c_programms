#include <stdio.h>
void swap(const char **pr,const char**pr1)
{
    const char*temp=*pr;
    *pr=*pr1;
    *pr1=temp;
}
int main()
{
    const char *s1="gfg";
    const char *s2="courses";
    swap(&s1,&s2);
    printf("%s %s\n",s1,s2);
    return 0;
}