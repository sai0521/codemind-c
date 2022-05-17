#include<stdio.h>
int main()
{
    int n,i,k,s=0,a=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    k=n/2;
    for(i=0;i<k;i++)
    {
        s=s+arr[i];
    }
    for(i=k;i<n;i++)
    {
        a=a+arr[i];
    }
    printf("%d",a-s);
}