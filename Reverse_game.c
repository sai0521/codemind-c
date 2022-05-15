#include<stdio.h>
int rev(int n)
{
    int m,r=0;
    while(n)
    {
        m=n%10;
        n=n/10;
        r=r*10+m;
    }
    return r;
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        arr[i]=rev(arr[i]);
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}