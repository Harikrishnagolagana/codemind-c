#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]",s);
    int i,count=0;
    for(i=0;s[i]!=NULL;i++)
    {
        count=count+1;
    }
    for(i=count-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}