#include<stdio.h>
int main()
{
    int n,m,i=1,gcd;
    scanf("%d %d",&n,&m);
    while(i<=n && i<=m)
    {
        if(n%i==0 && m%i==0)
        {
            gcd=i;
        }
        i++;
    }
    printf("%d",gcd);
}