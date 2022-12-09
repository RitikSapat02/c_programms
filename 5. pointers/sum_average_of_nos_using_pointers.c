#include<stdio.h>
void sum_avg(int a,int b,int*sum,float*avg)
{
    *sum=a+b;
    *avg=(float)*sum/2;
}
int main()
{
    int a=3,b=6;
    int sum=0;
    float avg=0.0;
    sum_avg(a,b,&sum,&avg);
    printf("SUM=%d\nAVG=%f\n",sum,avg);
    return 0;
}