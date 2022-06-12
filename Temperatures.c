#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        int f=0,c=0;
        for(j=i;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                f=1;
                break;
            }
            else
            {
                c++;
            }
        }
        if(f==1)
        {
            printf("%d ",c);
        }
        else
        {
            printf("%d ",0);
        }
    }
}