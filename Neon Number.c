#include<stdio.h>
int main()
{
    int n,m,sum=0,s;
    scanf("%d",&n);
    s=n*n;
    while(s!=0)
    {
        m=s%10;
        s=s/10;
        sum=sum+m;
        
    }
    if(sum==n)
        printf("Neon Number");
    else
        printf("Not Neon Number");
}