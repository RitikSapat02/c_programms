#include<stdio.h>
void reverse(int *p,int n)
{
    int temp;
    for(int i=0; i<n/2; i++)
    {
        temp=p[i];
        p[i]=p[n-1-i];
        p[n-1-i]=temp;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");

}
int main()
{
  int arr[10];
  for(int i=0; i<10; i++)
  {
      scanf("%d",&arr[i]);
  }
  reverse(arr,10);
  return 0;
}