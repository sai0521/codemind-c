#include<stdio.h>
int main()
{
	int n,a=0,c=0;
	scanf("%d",&n);
	
	int arr[n],i;
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	    c++;
	}
	for(i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			a++;
		
		}
		
	}
	if(c==a) printf("True");
	else printf("False");
}