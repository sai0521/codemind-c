#include<stdio.h>
int main()
{
    int n,m,i,j,c=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i!=1)
        {
            c=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0 )
                {
                    c++;
                }
            }
            if(c==0)
            {
                printf("%d
",i);
            }
        }
    }
}