#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("MUL.txt","w");
    int n;
    scanf("%d",&n);
    fprintf(ptr,"*******MULTIPLICATION TABLE OF %d********\n",n);
    for(int i=1; i<11; i++)
    {
        fprintf(ptr,"%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}