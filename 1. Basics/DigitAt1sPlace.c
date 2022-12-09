//WAP TO PRINT DIGIT AT ONES PLACE OF A NO
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any no:\n");
    scanf("%d",&n);
    printf("The digit at One's place is %d\n",n%10);
    printf("The two digits are %d\n",n%100);
    printf("last three dights are  %d\n",n%1000);
    return 0;
}