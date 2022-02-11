#include<stdio.h>
int prime(int x)
{
	int i,c=0;
	for(i=2 ; i<=x/2 ;i++)
	{
		if(x%i==0)
		{
			c++;
			break;
		}
	}
	return c; 
}

int main()
{
	int a,n;
	printf("choose your option: \n1.primality check \n2.primes in range \n3.composits in range \n");
	scanf("\n%d",&a);
	if(a==1)
	{
		int n;
		printf("enter the number : ");
		scanf("%d",&n);
		if(prime(n)==0)
		{
			printf(" its a prime");
		}
		else
		{
			printf(" its not a prime");
		}
	}
	else if(a==2)
	{
		int n,m,i;
		printf("enter the ranges :\n ");
		scanf("%d %d",&n ,&m);
		printf("the numbers are :");
		for(i=n ; i<=m ;i++)
		{
			if(prime(i)==0)
			{
				printf("%d ",i);
			}
			
		}
	}
	else if(a==3)
	{
		int n,m,i;
		printf("enter the ranges:\n");
		scanf("%d %d",&n,&m);
		printf("the numbers are :");
		for(i=n ; i<=m ;i++)
		{
			if(prime(i)!=0)
			{
				printf("%d ",i);
	    	}
		
		}
	}
	else
	{
		printf("*********enter valid option************");
	}
}