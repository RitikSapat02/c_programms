#include<stdio.h>
int main()
{
    char ch;
    scanf("%C",&ch);
    int vowel=(ch=='a'|| ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U');
    if(vowel){
        printf("%c is a vowel\n",ch);
    }
    else{
        printf("%c is a consonent\n",ch);
    }
    return 0;
}