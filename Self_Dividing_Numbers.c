#include<stdio.h>
#include<math.h>
int self(int n,int l)
{
    int m,r,s,c=0;
    s=n;
    while(s)
    {
        m=s%10;
        s=s/10;
        if(m!=0 && n%m==0)
        {
            c++;
        }
    }
    if(c==l)
    {
        return n;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,m,a;
    scanf("%d%d",&n,&m);
    for(n;n<=m;n++)
    {
        a=int(log10(n))+1;
        if(self(n,a))
        {
            printf("%d ",n);
        }
    }
}