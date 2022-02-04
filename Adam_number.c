#include<stdio.h>
int main()
{
    int n,m,a,rev=0,r=0,sq1,sq2,temp;
    scanf("%d",&n);
    temp=n;
    sq1=n*n;
    while(n)
    {
        m=n%10;
        n=n/10;
        rev=rev*10+m;
    }
    sq2=rev*rev;
    while(sq2>0)
    {
        a=sq2%10;
        sq2=sq2/10;
        r=r*10+a;
    }
    if(r==sq1)
    {
        printf("True");
        
    }
    else
    {
        printf("False");
    }
    
}