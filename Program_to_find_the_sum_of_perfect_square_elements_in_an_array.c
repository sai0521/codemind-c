#include<stdio.h>
int perf(int x)
{
    int j,flag=0;
    for(j=1;j<=x;j++)
    {
        if(j*j==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    int s=0;
    for(i=0;i<n;i++)
    {
        if(perf(arr[i]))
        {
            s=s+arr[i];
        }
    }
    printf("%d",s);
}