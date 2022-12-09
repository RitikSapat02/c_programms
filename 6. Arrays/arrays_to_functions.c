#include<stdio.h>
void read(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
}

void  print(int p[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",*p);   //*p=p[0]  p[0]=*(p+0)=*p
        p++;
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    read(a,n);
    print(a,n);
    return 0;
}