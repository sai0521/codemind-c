#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,d,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    d=log10(n)+1;
    while(n>0)
    {
        m=n%10;
        n=n/10;
        sum=sum+(pow(m,d));
        d--;
    }
    if(sum==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}