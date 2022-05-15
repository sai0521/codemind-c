#include<stdio.h>
int prime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return n;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,m,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m<=prime(arr[i]))
        {
            c++;
        }
    }
    printf("%d",c);
}