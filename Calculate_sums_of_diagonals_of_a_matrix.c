#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int a=0,b=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                a+=arr[i][j];
            }
            if(i+j==n-1)
            {
                b+=arr[i][j];
                
            }
            
        }
    }
    printf("Principal Diagonal:%d
",a);
    printf("Secondary Diagonal:%d",b);
}