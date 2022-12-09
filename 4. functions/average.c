#include<stdio.h>
float average(int a,int b,int c)
{
    return (float)(a+b+c)/3;
}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("Average : %.2lf\n",average(a,b,c));
    return 0;
}