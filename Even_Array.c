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
    int k=0,flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
    {
        k++;
    }
    else
    {
        flag=1;
    }
    }
    if(flag==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}