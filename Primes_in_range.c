#include<stdio.h>
int main()
{
    int n,m,i,flag,c=0;
    scanf("%d %d",&n,&m);
    for(n;n<=m;n++)
    {
        flag=0;
        for(i=2 ; i*i<=n ;i++)
        {
            if(n%i==0)
            {
                flag=1;
            }
        }
        if(flag==0 && n!=1)
        {
            c++;
        }
    }
    printf("%d",c);
}