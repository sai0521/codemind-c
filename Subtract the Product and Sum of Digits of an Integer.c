#include<stdio.h>
int main()
{
    int a,b,sum=0,product=1,minus=0;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        a=a/10;
        sum+=b;
        product*=b;
        minus=product-sum;
    }
    printf("%d",minus);
    return 0;
}