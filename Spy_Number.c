#include<stdio.h>
int main()
{
    int n,m,sum=0,pro=1;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        n=n/10;
        sum=sum+m;
        pro=pro*m;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}