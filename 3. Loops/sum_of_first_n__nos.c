#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    int i=1;
    // while(i<=n){
    //     sum+=i;
    //     i++;
    // }
    do{
        sum+=i;
        i++;
    }while(i<=n);
    
    printf("Sum of first %d numbers is: %d\n",n,sum);
    return 0; 
}