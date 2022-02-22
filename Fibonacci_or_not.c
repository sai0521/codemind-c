#include<stdio.h>
int main()
{
    int a,b=0,c=1,n=b+c,i,flag=0;
    scanf("%d",&a);
    while(n<=a)
    {
        b=c;
        c=n;
        n=b+c;
        if(n==a)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}