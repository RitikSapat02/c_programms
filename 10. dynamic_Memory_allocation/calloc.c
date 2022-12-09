#include<stdio.h>
#include<stdlib.h>

int *getarray(int n)
{
    int *ptr=(int *)calloc(n,sizeof(int));
    return ptr;
}


int main()
{
    int n;
    int *ptr;
    scanf("%d",&n);
    ptr=getarray(n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");

    //realloc

    ptr=realloc(ptr,3*sizeof(int));
    for(int i=0;i<3;i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");

    free(ptr);
    
    return 0;
}