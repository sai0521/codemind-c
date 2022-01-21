#include<stdio.h>
int main()
{
    int n,m,rev=0;
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%10;
        n=n/10;
        rev=rev*10+m;
        
    }
    printf("%d",rev);
    return 0;
}