#include<stdio.h>
int sorted(int a[],int n)
{
    for(int i=1; i<n; i++)
    {
        if(a[i]<a[i-1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    if(sorted(arr,n))
    {
        printf("array is sorted\n");
    }

    else{
        printf("Not sorted\n");
    }

    return 0;
}