#include<stdio.h>
int main()
{
    int n,i,j,m,s=0,m1=0;
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
        if(m1<s)
        {
            m1=s;
        }
    }
    printf("%d",m1);
}