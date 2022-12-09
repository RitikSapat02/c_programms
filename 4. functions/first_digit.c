#include<stdio.h>
int first(int a)
{
    while(a>10)
    {
        a/=10;
    }
    return a;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",first(n));
    return 0;
}