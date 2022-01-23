#include<stdio.h>
int main()
{
    int a,i,fc=0;
    scanf("%d",&a);
    for(i=2 ;i<=a/2 ;i++)
    {
        if(a%i==0)
        {
            fc++;
            break;
        }
    }
    if(fc==0)
       printf("prime");
    else
       printf("not a prime");
}