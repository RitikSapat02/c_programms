#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n%2==0){
        if(n==0){
            printf("you entered 0 and it is not even or odd\n");
        }
        else
        {
            printf("Even number\n");
        }
    }
    else{
        printf("Odd number\n");
    }
    return 0;
}