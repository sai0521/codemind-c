#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
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
    int n,i,c=0;
    scanf("%d",&n);
    int arr[10];
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            if(prime(i))
            {
                arr[c++]=i;
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        for(i=0;i<2;i++)
        {
            printf("%d ",arr[i]);
        }
    }
}