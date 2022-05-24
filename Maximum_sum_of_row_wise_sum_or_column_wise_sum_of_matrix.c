#include<stdio.h>
int main()
{
    int n,i,j,m,s=0,s1=0,ma=0,m1=0;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<m;j++)
        {
                s=s+arr[i][j];
        }
        if(s>ma)
        {
            ma=s;
        }
    }
    for(j=0;j<m;j++)
    {
        s1=0;
        for(i=0;i<n;i++)
        {
            s1=s1+arr[i][j];
        }
        if(m1<s1)
        {
            m1=s1;
        }
    }
    if(m1>ma) printf("%d",m1);
    else printf("%d",ma);
}