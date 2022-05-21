#include<stdio.h>
int main()
{
    int n,i,a,b,s=0,c=0;
    scanf("%d",&n);
    int arr[n],brr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            brr[s++]=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            brr[s++]=arr[i];
        }
    }
    for(i=0;i<s;i++)
    {
        printf("%d ",brr[i]);
    }
}