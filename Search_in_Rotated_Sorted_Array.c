#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int se,x=0;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==a[i])
        {
            x=i;
            break;
        }
    }
    if(x==0)
    {
        printf("%d",-1);
    }
    else
    {
        printf("%d",x);
    }
}