#include<stdio.h>
int reverse(int n)
{
    int rev=0,m;
    while(n>0)
    {
        m=n%10;
        n=n/10;
        rev=rev*10+m;
    }
    return rev;
}
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=a ; i<b ;i++)
    {
        if(i==reverse(i))
        {
            printf("%d ",i);
        }
    }
    
}