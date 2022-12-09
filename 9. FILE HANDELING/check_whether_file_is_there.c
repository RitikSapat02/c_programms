#include<stdio.h>
int main()
{
    FILE *p;
    p=fopen("r.txt","r");
    if(p==NULL)
    {
        printf("FILE is not created\n");
    }
    else
    {
    int num,num2;
    fscanf(p,"%d",&num);
    fscanf(p,"%d",&num2);
    fclose(p);
    printf("The value of num is %d\n",num);
    printf("The value of num2 is %d\n",num2);
    }
    return 0;
}