#include<stdio.h>
int main()
{
    long long int n,m,c=0;
    scanf("%lld",&n);
    while(n>0)
    {
        m=n%10;
        n=n/10;
        c++;
    }
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}