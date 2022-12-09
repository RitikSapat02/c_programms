// Calculator

#include<stdio.h>

int sum(int a, int b)
{
    return a+b;
}


int sub(int a, int b)
{
   return a-b;
}


int mul(int a, int b)
{
    return a*b;
}


int divide(int a, int b)
{
    return a/b;
}


int rem(int a, int b)
{
    return a%b;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    
    int choice;
    do{
        printf("Enter your choice\n");
        printf("\t1. ADDITION \n\t2. SUBTRACTION \n\t3. MULTIPLICATION \n\t4. DIVISION \n\t5. REMAINDER\n\t\n\t6. EXIT\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("%d + %d = %d\n",a,b,sum(a,b));
            break;

        case 2:
             printf("%d - %d = %d\n",a,b,sub(a,b));
            break;

        case 3:
            printf("%d X %d = %d\n",a,b,mul(a,b));
            break;

        case 4:
            printf("%d / %d = %d\n",a,b,divide(a,b));
            break;

        case 5:
            printf("when b divides a it gives remainder %d \n",rem(a,b));
            break;

        case 6:
           printf("Thank you\n");
            break;
        default:
            printf("Invalid input\n");
    }
 
    }while(choice!=6);
    return 0;
}