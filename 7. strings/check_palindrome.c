#include <stdio.h>
#include<string.h>
int main()
{
    char s[42];
    scanf("%s",s);
    int start=0;
    int last=strlen(s)-1;
    while(start<last)
    {
        if(s[start]!=s[last])
        {
            printf("No\n");
            return 0;
        }
        start++;
        last--;
    }
    printf("Yes\n");
    return 0;
}