#include<stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    int arr[n],sum=0;
    for(i=0 ; i<n; i++)
    {
        scanf("%d",arr+i);
    }
    scanf("%d",&k);
    for(i=0 ; i<n ; i++)
    {
        if(arr[i]<=k)
        {
            sum=sum+1;
        }
        if(arr[i]>k)
        {
            sum=sum+2;
        }
    }
    printf("%d",sum);
}