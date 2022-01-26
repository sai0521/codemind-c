#include<stdio.h>
int main()
{
    int a,b,sum=0 ,i;
    scanf("%d",&a);
    for(i=1 ; i<a ; i++)
    {
        b=a%i;
        if(b==0)
        {
            sum=sum+i;
        }
    }
    if(sum==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}