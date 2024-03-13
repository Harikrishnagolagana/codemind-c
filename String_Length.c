#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,k=0;
    for(i=0;s[i]!=0;i++)
    {
        k++;
    }
    printf("%d",k);
}