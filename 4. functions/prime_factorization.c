#include<stdio.h>
int isprime(int x)
{
    for(int i=2; i<x; i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    
    }
    return 1;
}

int prime_factor(int n)
{
    for(int i=2; i<=n; i++)
    {
        if(isprime(i)==1)
        {
            
            while(n%i==0)
            {
                printf("%d ",i);
                n=n/i;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    prime_factor(n);
    return 0;
}