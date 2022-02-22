#include<stdio.h>
int main()
{
    int n,m,i,t;
    scanf("%d %d",&n,&m);
    for(i=1 ; i<=m ; i++)
    {
        if(i%2!=0)
        {
            t=n*i;
            printf("%d x %d = %d
",n,i,t);
        }
    }
}