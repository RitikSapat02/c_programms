#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("sum of first %d natural no is: %d\n",n,n*(n+1)/2);
    return 0;
}
