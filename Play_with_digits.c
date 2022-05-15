#include<stdio.h>
int sum(int n)
{
    int m,s=0;
    while(n)
    {
        m=n%10;
        n=n/10;
        s=s+m;
    }
    return s;
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
        c=c+sum(arr[i]);
        
    }
    printf("%d",c);
}