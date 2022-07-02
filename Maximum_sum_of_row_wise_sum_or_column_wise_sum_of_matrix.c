#include<stdio.h>
int main()
{
    int n,i,j,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    for(i=0;i<m;i++)
    {
        int s=0;
        for(j=0;j<n;j++)
        {
            s+=arr[j][i];
        }
        if(s>max)
        {
            max=s;
        }
    }
    for(i=0;i<n;i++)
    {
        int s=0;
        for(j=0;j<m;j++)
        {
            s+=arr[i][j];
        }
        if(s>max)
        {
            max=s;
        }
    }
    printf("%d",max);
    
}