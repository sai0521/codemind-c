#include<stdio.h>
int main()
{
    int n,m,rev=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        m=n%10;
        n=n/10;
        rev=rev*10+m;
    }
    if(rev==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}