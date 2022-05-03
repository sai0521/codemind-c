#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	int b,c=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
		if(arr[i]==b)
		{
			c++;
		}
	}
	printf("%d",c);
}