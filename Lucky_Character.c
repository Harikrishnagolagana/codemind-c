#include<stdio.h>
#include<string.h>
int main()
{
    char h[100];
    scanf("%s",h);
    int i;
    for(i=0;h[i]!=NULL;i++)
    {
        if(i==6)
        {
            printf("%c",h[i]);
        }
    }
}