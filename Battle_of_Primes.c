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
    int n,i,c=0,m,s;
    scanf("%d",&n);
    scanf("%d",&m);
    s=n+m;
    while(1)
    {
        s++;
        c++;
        if(prime(s))
        {
            break;
        }
    }
    printf("%d",c);
}