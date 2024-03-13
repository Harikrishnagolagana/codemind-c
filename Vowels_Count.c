#include<stdio.h>
int main()
{
    char h[100];
    scanf("%[^
]",h);
    int i,k=0;
    for(i=0;h[i]!=NULL;i++)
    {
        if(h[i]=='a'||h[i]=='e'||h[i]=='i'||h[i]=='o'||h[i]=='u')
    {
       k++; 
    }
    }
    printf("%d",k);
}