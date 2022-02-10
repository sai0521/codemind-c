#include<stdio.h>
int main()
{
	int i,j,r,c;
	scanf("%d %d",&r,&c);
	int mat[r][c],max=0,sum=0;
	for(i=0 ;i<r ;i++)
	{
		for(j=0 ; j<c ; j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=1 ;i<r-1 ;i++)
	{
		for(j=1 ; j<c-1 ; j++)
		{
			sum=mat[i-1][j]+mat[i+1][j]+mat[i][j-1]+mat[i][j+1];
			if(sum>max)
			{
				max=sum;
			}
		}
	}
	printf("%d",max);
	
}