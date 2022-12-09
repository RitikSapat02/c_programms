#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
    //modification during traversal
     for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]*2;
    }

    //printing using while loop
    printf("\n");
    int i=0;
    while(i<n)
    {
        printf("%d\n",arr[i]);
        i++;
    }
    return 0;
}