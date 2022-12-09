#include<stdio.h>
int distinct(int ar[],int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        int isdistinct=1;
        for(int j=i-1; j>=0; j--)
        {
            if(ar[i]==ar[j])
            {
                isdistinct=0;
                break;
            }
            
        }
        if(isdistinct==1)
            {
                count++;
            }

    }
    return count;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("distinct=%d\n",distinct(arr,n));
    return 0;
}