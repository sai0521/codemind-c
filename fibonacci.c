#include<stdio.h>
int main()
{
    int a,b=0,c=1,n,i;
    n=b+c;
    scanf("%d",&a);
    printf("%d %d ",b,c);
    for(i=3 ; i<=a ; i++)
    {
        printf("%d ",n);
        b=c;
        c=n;
        n=b+c;
        
    }
}