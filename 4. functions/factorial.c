#include<stdio.h>
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("Factorial: %d\n",fact(n));
    return 0;
}