#include<stdio.h>
void max_min(int a[],int n)
{
    int max=a[0];
    int min=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }

        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Max=%d\nMin=%d\n",max,min);

}

int main()
{
   int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    max_min(arr,n);
    return 0;
}