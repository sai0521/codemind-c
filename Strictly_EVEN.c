#include<stdio.h>
int main()
{
	int n,flag=0;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
    for(i=0 ; i<n ; i++)
    {
        if(i%2==0 && arr[i]%2==0)
        {
            flag=1;
        }
        else if ( i%2!=0 && arr[i]%2==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}