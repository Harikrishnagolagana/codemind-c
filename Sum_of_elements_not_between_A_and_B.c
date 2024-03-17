#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b,c,sum=0;
    scanf("%d%d",&b,&c);
    for(i=0;i<n;i++)
    {
        if(a[i]<b||a[i]>c)
        {
            sum+=a[i];
        }
        
    }
    printf("%d",sum);
}