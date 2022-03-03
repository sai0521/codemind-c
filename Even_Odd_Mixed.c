#include<stdio.h>
int main()
{
    int n,i,m,ec=0,oc=0;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        n=n/10;
        if(m%2==0)
        {
            ec++;
        }
        else if(m%2!=0)
        {
            oc++;
        }
    }
    if(ec>0 && oc>0)
    {
        printf("Mixed");
    }
    else if(ec>0 && oc==0)
    {
        printf("Even");
    }
    else if(ec==0 && oc>0)
    {
        printf("Odd");
    }
}