#include<stdio.h>
int main()
{
    int arr[4];
    int *ptr=arr;
    for(int i=0; i<4; i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    for(int i=0; i<4; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}