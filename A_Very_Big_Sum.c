#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int arr[n],s=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",arr+i);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    printf("%lld",s);
}