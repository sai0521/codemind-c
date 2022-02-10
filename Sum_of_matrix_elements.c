#include<stdio.h>
int main()
{
    int i,j,sum=0,r,c;
    scanf("%d %d",&r ,&c);
    int mat[r][c];
    for(i=0 ; i<r ;i++)
    {
        for(j=0 ;j<c ;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ;j<c ; j++)
        {
            sum=sum+mat[i][j];
        }
    }
    printf("%d",sum);
}