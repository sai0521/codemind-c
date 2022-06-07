#include<stdio.h>
int main()
{
    int n,i,se,a[100],c=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(a[i]==se)
        {
            printf("%d ",i);
            c+=1;
            x=i;
        }
    }
    if(c==1)
    {
        printf("%d",x);
    }
    if(c==0)
    {
        printf("-1 -1");
    }
    
}