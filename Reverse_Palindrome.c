#include<stdio.h>
int rev(int n)
{
    int m,rev=0;
    while(n)
    {
        m=n%10;
        n=n/10;
        rev=rev*10+m;
    }
    return rev;
}
int main()
{
    int a;
    scanf("%d",&a);
    do
    {
        a=a+rev(a);
    }while(a!=rev(a));
    printf("%d",a);
}