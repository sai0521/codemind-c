#include<stdio.h>
int main()
{
    int n,m,i,j,sum1=0,sum2=0,temp1,temp2;
    scanf("%d%d",&n,&m);
    temp1=n;
    temp2=m;
    for(i=1 ; i<=n/2 ; i++)
    {
        if(n%i==0)
        {
            sum1=sum1+i;
        }
    }
    for(j=1 ; j<=m/2 ; j++)
    {
        if(m%j==0)
        {
            sum2=sum2+j;
        }
    }
    if(sum1==temp2 && sum2==temp1)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}