#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n],c=0;
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0 ; i<n;i++)
    {
        c=0;
        for(j=0 ;j<n ; j++)
        {
            if(arr[i]>arr[j])
            {
                c++;
            }
        }
        printf("%d ",c);
    }
}