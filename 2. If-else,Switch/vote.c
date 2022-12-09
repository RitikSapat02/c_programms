#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18){
        printf("you can vote!\n");
    }
    else if(age<18 && age>0)
    {
        printf("You cannot vote, wait for %d years\n",18-age);
    }
    else{
        printf("Invalid age!\n");
    }
    return 0;
}