#include<stdio.h>
int main()
{
	int i,j,r,c;
	scanf("%d %d",&r,&c);
	int mat[r][c],max=0,sum1=0,sum2=0;
	for(i=0 ;i<r ;i++)
	{
		for(j=0 ; j<c ; j++)
		{
		
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=1 ;i<r-1;i++)
	{
		for(j=1 ; j<c-1 ; j++)
		{
			sum1=mat[i-1][j]+mat[i+1][j]+mat[i][j-1]+mat[i][j+1];//sum of elements in four directions
			sum2=mat[i-1][j-1]+mat[i+1][j+1]+mat[i-1][j+1]+mat[i+1][j-1];//sum of elements in corners
			if((sum1+sum2)>max)
			{
				max=(sum1+sum2);
			}
		}
	}
	printf("%d",max);
	
}