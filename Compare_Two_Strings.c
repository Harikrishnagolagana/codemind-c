#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s%s",s1,s2);
    int i,c=0;
    for(i=0;s1[i]!=NULL && s2[i]!=NULL;i++)
    {
        if(s1[i]!=s2[i])
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}