#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	int brr[100],c=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			brr[c++]=arr[i];
		}
	}
	printf("%d",brr[c-1]);
}