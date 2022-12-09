#include<stdio.h>
double avg(int a[],int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    return (double)sum/n;
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

    printf("Average: %lf\n",avg(arr,n));
    return 0;
}