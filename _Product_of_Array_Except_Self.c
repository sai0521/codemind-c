#include<stdio.h>
int main()
{
    int n,i,s=0,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        s=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                s=s*arr[j];
            }
        }
        printf("%d ",s);
    }
}