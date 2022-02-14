#include<stdio.h>
int main()
{
    int n,m,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        m=n%10;
        n=n/10;
        sum+=m;
    }
    if(temp%sum==0)
    {
        printf("True");
        
    }
    else
    {
        printf("False");
    }
}