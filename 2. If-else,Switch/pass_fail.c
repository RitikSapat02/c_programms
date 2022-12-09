#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter marks of subject 1: ");
    scanf("%d",&a);

    printf("Enter marks of subject 2: ");
     scanf("%d",&b);

    printf("Enter marks of subject 3: ");
    scanf("%d",&c);

    double percent=(a+b+c)/3.0;
    if(a>=33 && b>=33 && c>=33 && percent>=40){
        printf("you are pass and you got %lf",percent);
    }

    else{
        printf("you are fail and your percent is %lf",percent);
    }
    return 0;
}