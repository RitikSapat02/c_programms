#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    scanf("%d",&n);

    while(n){
        rem=n%10;
        n=n/10;
        sum+=rem;
    }
    printf("%d\n",sum);
    return 0;

}