#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enetr a number: ");
    scanf("%d",&n);

    int i=1;
    while(i<=10){
        sum+=n*i;
        i++;
    }

    printf("sum is %d\n",sum);
    return 0;
}