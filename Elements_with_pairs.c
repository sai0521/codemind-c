#include<stdio.h>
int main()
{
    int n,i,j,k,c,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    if(n%2!=0)
    {
        arr[n++]=0;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
   
}