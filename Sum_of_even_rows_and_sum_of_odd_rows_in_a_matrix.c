#include<stdio.h>
int main()
{
    int n,m,i,j,s=0,c=0;
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
           
            for(j=0;j<m;j++)
            {
                if(i%2==0)
                {
                    s=s+arr[i][j];
                }
                else
                {
                    c=c+arr[i][j];
                }
            }
    }
    printf("%d %d",s,c);
}