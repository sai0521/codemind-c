#include<stdio.h>
int main()
{
    int n,i,k,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
        if(arr[i]==k)
        {
            break;
        }
    }
    printf("%d",s);
}