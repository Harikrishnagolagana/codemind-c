#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
          k++;
        }
    }
     printf("%d",k);
}