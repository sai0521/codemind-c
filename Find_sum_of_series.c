#include<stdio.h>
int main()
{
    float n,m,i,sum=0;
    scanf("%f",&n);
    for(i=1 ; i<=n ; i++)
    {
        m=1/i;
        sum=sum+m;
    }
    printf("%.2f",sum);
}