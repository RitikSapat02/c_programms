#include<stdio.h>
int main()
{
    int x=10;
    int *ptr=&x;
    printf("%d\n",x);
    x=x+30;
    printf("%d\n",*ptr);
    *ptr*=2;
    printf("%d\n",x);
    return 0;
}