#include<stdio.h>
#include<math.h>
int mega(int n)
{
    int m,c=0;
    while(n)
    {
        m=n%10;
        n=n/10;
        if(m==2 || m==3 || m==5 ||m==7)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n,c=0,i,len,l;
    scanf("%d",&n);
    len=int(log10(n))+1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        l=mega(n);
        if(l==len)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}