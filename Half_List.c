#include<stdio.h>
int main()
{
    int n,i,m,c,a;
    scanf("%d",&n);
    a=n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    m=a/2;
    c=m;
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
        c--;
        if(c==0)
        {
            break;
        }
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",arr[i]);
    }
    
}