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

        for(j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                printf("%d",arr[i]);
                s=1;
                break;
            }
        }
        if(s==1)
        {
            break;
        }
    }
}