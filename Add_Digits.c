#include<stdio.h>
int add(int n)
{
    int m,sum=0;
    if(n<=9)
    {
        printf("%d",n);
    }
    else
    {
        while(n>0)
        {
            m=n%10;
            n=n/10;
            sum=sum+m;
        }
        return add(sum);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    add(n);
}