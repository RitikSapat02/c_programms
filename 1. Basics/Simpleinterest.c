#include<stdio.h>
int main()
{
    int principal,rate,years;
    float simpleInterest;
    printf("Enter Principal,rate and years:");
    scanf("%d %d %d",&principal,&rate,&years);
    simpleInterest=(float)(principal*rate*years)/100;
    printf("Simple interest is: %f\n",simpleInterest);
    return 0;
}